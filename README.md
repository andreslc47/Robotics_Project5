# Robotics_Project5

sudo apt-get -y install xterm

sudo apt-get -y install wmctrl

sudo apt-get -y install ros-kinetic-joy

sudo apt-get -y install ros-melodic-move-base*

sudo apt-get -y install ros-melodic-map-server*

sudo apt-get -y install ros-melodic-amcl*

sudo apt-get -y install ros-melodic-navigation*

sudo apt-get -y install ros-melodic-joint-state-publisher-gui

sudo apt-get -y install ros-melodic-effort-controllers

sudo apt-get -y install ros-melodic-controller-manager

sudo apt-get -y install ros-melodic-rtabmap

sudo apt-get -y install ros-melodic-rtabmap-ros

sudo apt-get -y install ros-melodic-rviz

sudo apt-get -y install ros-kinetic-turtlebot 

sudo apt-get -y install ros-kinetic-turtlebot-apps 

sudo apt-get -y install ros-kinetic-turtlebot-interactions 

sudo apt-get -y install ros-kinetic-turtlebot-simulator 

sudo apt-get -y install ros-kinetic-kobuki-ftdi 

sudo apt-get -y install ros-kinetic-ar-track-alvar-msgs



You could prefer to download the Project already configured:

This one is the complete version:

wget https://www.dropbox.com/s/ae2i6tz4gzr26fg/Robotics_Project5.zip

This one is the version presented to Udacity:

wget https://www.dropbox.com/s/b29ydipzsgkri9x/Project5_udacity.zip

unzip Project5_udacity.zip

cd Project5_udacity

./compile_all

cd src/scripts

./home_service.sh




cd src

git clone https://github.com/ros-perception/slam_gmapping.git

git clone https://github.com/turtlebot/turtlebot.git

git clone https://github.com/turtlebot/turtlebot_interactions.git

git clone https://github.com/turtlebot/turtlebot_simulator.git



