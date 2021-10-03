#include <ros/ros.h>
#include <visualization_msgs/Marker.h>
#include <nav_msgs/Odometry.h>
#include <vector>
#include <math.h>



double tolerance_distance = 0.8;
double tolerance_vel_lin = 0.00001;
double tolerance_vel_angular = 0.001;
std::vector<double> pos_pick_up = {1.0,3.0};  // test:{-2.0,1.0}, UdacityOffice: {2.0,4.0}; 
std::vector<double> pos_drop_off = {0.5,-1.0};  // test:{-3.0,-4.0}, UdacityOffice: {-1.0,2.0}; 
double scale_marker = 0.25;
bool reached_pick_up = false;
bool reached_drop_off = false;
visualization_msgs::Marker marker;


void create_marker(){

    uint32_t shape = visualization_msgs::Marker::CUBE;
    marker.header.frame_id = "map";
    marker.header.stamp = ros::Time::now();
    marker.ns = "basic_shapes";
    marker.id = 0;
    marker.type = shape;
    marker.action = visualization_msgs::Marker::ADD;
    marker.scale.x = scale_marker;
    marker.scale.y = scale_marker;
    marker.scale.z = scale_marker;
    marker.color.r = 0.0f;
    marker.color.g = 1.0f;
    marker.color.b = 0.0f;
    marker.color.a = 1.0;

}

void publish_marker(ros::Publisher marker_pub, std::vector<double> position){

    marker.pose.position.x = position[0];
    marker.pose.position.y = position[1];
    marker.pose.position.z = scale_marker/2; 
    marker.pose.orientation.x = 0.0;
    marker.pose.orientation.y = 0.0;
    marker.pose.orientation.z = 0.0;
    marker.pose.orientation.w = 1.0;

    marker_pub.publish(marker);
    ROS_INFO("Marker published");

}


void delete_marker(ros::Publisher marker_pub){
    marker.action = visualization_msgs::Marker::DELETE;
    marker_pub.publish(marker);
    ROS_INFO("Marker erased");
}



double calculate_distance(std::vector<double> pos1, std::vector<double> pos2)
{
  double dist;
  dist = sqrt(pow(pos1[0] - pos2[0], 2.0) + pow(pos1[1] - pos2[1], 2.0));
  return dist;
}


void check_tolerance_callback(const nav_msgs::Odometry::ConstPtr& odom)
{
  std::vector<double> pos_robot;
  double vel_lin_robot;
  double vel_angular_robot;
  //pos_robot = {odom.pose.pose.position.y,-odom.pose.pose.position.x};
  pos_robot = {odom->pose.pose.position.x,odom->pose.pose.position.y};
  vel_lin_robot = odom->twist.twist.linear.x;
  vel_angular_robot = odom->twist.twist.angular.z;
  //ROS_INFO("Position x:  [%f], y: [%f]", pos_robot[0], pos_robot[1]);
  //ROS_INFO("Linear velocity: [%f], Angular velocity: [%f]", vel_lin_robot, vel_angular_robot);

  double dist_pick_up = calculate_distance(pos_robot,pos_pick_up);
  double dist_drop_off = calculate_distance(pos_robot,pos_drop_off);

  if (dist_pick_up <= tolerance_distance)
  {
       if (fabs(vel_lin_robot) <= tolerance_vel_lin && fabs(vel_angular_robot) <= tolerance_vel_angular && reached_pick_up == false)
       {
         ROS_INFO("We have reached the pick up point");
         reached_pick_up = true;
       }else{
         if (reached_pick_up == false){
           ROS_INFO("We are near the pick up zone");
         }
       }
  }else if (dist_drop_off <= tolerance_distance)
  {
       if (fabs(vel_lin_robot) <= tolerance_vel_lin && fabs(vel_angular_robot) <= tolerance_vel_angular && reached_drop_off == false)
       {
         ROS_INFO("We have reached the drop off point");
	 reached_drop_off = true;
       }else{
         if (reached_drop_off == false){
           ROS_INFO("We are near the drop off zone");
         }
       }
  }


}


int main( int argc, char** argv )
{
    ros::init(argc, argv, "add_markers");
    ros::NodeHandle n;
    ros::Rate r(1);
    ros::Publisher marker_pub = n.advertise<visualization_msgs::Marker>("visualization_marker", 1);
    ros::Subscriber odom_sub = n.subscribe("odom", 10, check_tolerance_callback);

    //ros::spin();

  while (ros::ok())
  {

    create_marker();
    while (marker_pub.getNumSubscribers() < 1)
    {
      if (!ros::ok())
      {
        return 0;
      }
      ROS_WARN_ONCE("Please create a subscriber to the marker");
      sleep(1);
    }
    publish_marker(marker_pub, pos_pick_up);
    ROS_INFO("The robot is going to the pick up point");

    while (!reached_pick_up){
      ros::spinOnce(); 
    }

    // cuando llega al pick up point:
    delete_marker(marker_pub);
    ROS_INFO("The marker has been deleted");
    ROS_INFO("waiting 5 seconds");
    // El robot no se mueve por 5 segundos:
    ros::Duration(5.0).sleep();

    ROS_INFO("The robot is going to the drop off point");
    // No se muestra nada, solo el robot camina hacia el drop off point.

    while (!reached_drop_off){
      ros::spinOnce(); 
    }

    // cuando llega al drop of point:
    create_marker();
    while (marker_pub.getNumSubscribers() < 1)
    {
      if (!ros::ok())
      {
        return 0;
      }
      ROS_WARN_ONCE("Please create a subscriber to the marker");
      sleep(1);
    }
    publish_marker(marker_pub, pos_drop_off);
    ROS_INFO("The robot has completed the task");

    ros::Duration(20.0).sleep();

    break;

    r.sleep();
  }

    return 0;
}









