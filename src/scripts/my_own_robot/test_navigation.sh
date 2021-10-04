#!/bin/sh

xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; roslaunch my_robot world.launch " &
sleep 5
xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; roslaunch my_robot amcl.launch " &
sleep 5
xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_rviz_launchers view_navigation.launch "
#xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_rviz_launchers view_navigation.launch " &
#sleep 5
#xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; rosrun map_server map_server /home/robond/Robotics_Project5/src/map/map.yaml "

