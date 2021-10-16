# Robotics_Project5

sudo apt-get -y install xterm

sudo apt-get -y install wmctrl

sudo apt-get -y install ros-kinetic-joy

sudo apt-get -y install ros-kinetic-move-base*

sudo apt-get -y install ros-kinetic-map-server*

sudo apt-get -y install ros-kinetic-amcl*

sudo apt-get -y install ros-kinetic-navigation*

sudo apt-get -y install ros-kinetic-joint-state-publisher-gui

sudo apt-get -y install ros-kinetic-effort-controllers

sudo apt-get -y install ros-kinetic-controller-manager

sudo apt-get -y install ros-kinetic-rtabmap

sudo apt-get -y install ros-kinetic-rtabmap-ros

sudo apt-get -y install ros-kinetic-rviz

sudo apt-get -y install ros-kinetic-turtlebot 

sudo apt-get -y install ros-kinetic-turtlebot-apps 

sudo apt-get -y install ros-kinetic-turtlebot-interactions 

sudo apt-get -y install ros-kinetic-turtlebot-simulator 

sudo apt-get -y install ros-kinetic-kobuki-ftdi 

sudo apt-get -y install ros-kinetic-ar-track-alvar-msgs



You could prefer to download the Project already configured:

This one is the complete version:

wget https://www.dropbox.com/s/ae2i6tz4gzr26fg/Robotics_Project5.zip

This one is the version presented to Udacity (from my Dropbox account)

wget https://www.dropbox.com/s/b29ydipzsgkri9x/Project5_udacity.zip

This one is the version presented to Udacity (from my GitHub account) (It is preferrable to use this one)

wget https://github.com/andreslc47/Project5_udacity/raw/main/Project5_udacity.zip

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



