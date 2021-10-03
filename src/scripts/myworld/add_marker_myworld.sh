#!/bin/sh

xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_gazebo turtlebot_world.launch world_file:=/home/robond/Robotics_Project5/src/myworld.world " &
sleep 5
xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_gazebo amcl_demo.launch " &
sleep 5
xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_rviz_launchers view_navigation.launch " &
sleep 5
xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; rosrun map_server map_server /home/robond/Robotics_Project5/src/map/other_maps/myworldmap/map.yaml " &
sleep 5
xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; rosrun add_markers add_markers "



