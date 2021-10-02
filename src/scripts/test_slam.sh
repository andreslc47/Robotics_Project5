#!/bin/sh

xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_gazebo turtlebot_world.launch" &
sleep 5
xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_gazebo gmapping_demo.launch " &
sleep 5
xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_rviz_launchers view_navigation.launch " &
sleep 5
xterm -e " source /opt/ros/kinetic/setup.bash ; source /home/robond/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_teleop keyboard_teleop.launch "
#wmctrl -r 'navigation.rviz - RViz' -e '0,0,1920,1900,1050' &
#wmctrl -r 'Gazebo' -e '0,0,0,1900,1050'



