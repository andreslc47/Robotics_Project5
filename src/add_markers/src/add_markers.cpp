#include <ros/ros.h>
#include <visualization_msgs/Marker.h>
#include <nav_msgs/Odometry.h>
#include <vector>
#include <math.h>



double tolerance = 0.8;
std::vector<double> pos_pick_up = {-2.0,1.0};
std::vector<double> pos_drop_off = {-3.0,-4.0};



double calculate_distance(std::vector<double> pos1, std::vector<double> pos2)
{
  double dist;
  dist = sqrt(pow(pos1[0] - pos2[0], 2.0) + pow(pos1[1] - pos2[1], 2.0));
  return dist;
}




void check_tolerance_callback(const nav_msgs::Odometry::ConstPtr& odom)
{
  std::vector<double> pos_robot;
  //pos_robot = {odom.pose.pose.position.y,-odom.pose.pose.position.x};
  pos_robot = {odom->pose.pose.position.x,odom->pose.pose.position.y};
  ROS_INFO("Position x:  [%f], y: [%f]", pos_robot[0], pos_robot[1]);

  double dist_pick_up = calculate_distance(pos_robot,pos_pick_up);
  double dist_drop_off = calculate_distance(pos_robot,pos_drop_off);

  if (dist_pick_up < tolerance)
  {
     ROS_INFO("We are near the pick up zone");
  }

  if (dist_drop_off < tolerance)
 {
    ROS_INFO("we are near the drop off zone");
 }

}


int main( int argc, char** argv )
{
    ros::init(argc, argv, "add_markers");
    ros::NodeHandle n;
    ros::Rate r(1);
    ros::Publisher marker_pub = n.advertise<visualization_msgs::Marker>("visualization_marker", 1);
    ros::Subscriber odom_sub = n.subscribe("odom", 10, check_tolerance_callback);

    ros::spin();

/*

    uint32_t shape = visualization_msgs::Marker::CUBE;

    visualization_msgs::Marker marker;
    marker.header.frame_id = "map";
    marker.header.stamp = ros::Time::now();

    marker.ns = "basic_shapes";
    marker.id = 0;

    marker.type = shape;

    marker.action = visualization_msgs::Marker::ADD;

    marker.pose.position.x = -2.0;
    marker.pose.position.y = 1.0;
    marker.pose.position.z = 0.125;
    marker.pose.orientation.x = 0.0;
    marker.pose.orientation.y = 0.0;
    marker.pose.orientation.z = 0.0;
    marker.pose.orientation.w = 1.0;

    marker.scale.x = 0.25;
    marker.scale.y = 0.25;
    marker.scale.z = 0.25;

    marker.color.r = 0.0f;
    marker.color.g = 1.0f;
    marker.color.b = 0.0f;
    marker.color.a = 1.0;

    while (marker_pub.getNumSubscribers() < 1)
    {
      if (!ros::ok())
      {
        return 0;
      }
      ROS_WARN_ONCE("Please create a subscriber to the marker");
      sleep(1);
    }
    marker_pub.publish(marker);
    ROS_INFO("pick up marker published");
    ROS_INFO("waiting 5 seconds");
    ros::Duration(5.0).sleep();

    marker.action = visualization_msgs::Marker::DELETE;
    marker_pub.publish(marker);
    ROS_INFO("pick up marker erased");
    ROS_INFO("waiting 5 seconds");
    ros::Duration(5.0).sleep();

    bool first_loop = true;

  while (ros::ok())
  {
    marker.action = visualization_msgs::Marker::ADD;
    marker.pose.position.x = -3.0;
    marker.pose.position.y = -4.0;
    marker.pose.position.z = 0.125;
    marker.pose.orientation.x = 0.0;
    marker.pose.orientation.y = 0.0;
    marker.pose.orientation.z = 0.0;
    marker.pose.orientation.w = 1.0;

    marker.scale.x = 0.25;
    marker.scale.y = 0.25;
    marker.scale.z = 0.25;

    marker.color.r = 0.0f;
    marker.color.g = 1.0f;
    marker.color.b = 0.0f;
    marker.color.a = 1.0;

    marker.lifetime = ros::Duration();

    marker_pub.publish(marker);
    if (first_loop)
    {
       ROS_INFO("drop off marker published");
       first_loop = false;
    }
    r.sleep();
  }


*/


}









