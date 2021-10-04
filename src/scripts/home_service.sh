#!/bin/sh

#xterm -e " source /opt/ros/kinetic/setup.bash ; source $(echo $HOME)/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_gazebo turtlebot_world.launch world_file:=/home/robond/Robotics_Project5/src/UdacityOffice.world " &
xterm -e " source /opt/ros/kinetic/setup.bash ; source $(echo $HOME)/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_gazebo turtlebot_world.launch " &
sleep 5
xterm -e " source /opt/ros/kinetic/setup.bash ; source $(echo $HOME)/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_gazebo amcl_demo.launch " &
sleep 5
xterm -e " source /opt/ros/kinetic/setup.bash ; source $(echo $HOME)/Robotics_Project5/devel/setup.bash ; roslaunch turtlebot_rviz_launchers view_navigation.launch " &
#sleep 5 
#xterm -e " source /opt/ros/kinetic/setup.bash ; source $(echo $HOME)/Robotics_Project5/devel/setup.bash ; rosrun map_server map_server $(echo $HOME)/Robotics_Project5/src/map/map.yaml " &
sleep 5
xterm -e " source /opt/ros/kinetic/setup.bash ; source $(echo $HOME)/Robotics_Project5/devel/setup.bash ; rosrun pick_objects pick_objects " &
xterm -e " source /opt/ros/kinetic/setup.bash ; source $(echo $HOME)/Robotics_Project5/devel/setup.bash ; rosrun add_markers add_markers "





