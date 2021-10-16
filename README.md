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

cd /home/andres

Download the Project (choose only one option)

Option 1: This one is the complete version (Dropbox account) (Use this if you want to test the project using other map and my own robot)
  
   wget https://www.dropbox.com/s/esm39s66fce5d9l/Robotics_Project5.zip
   
Option 2: This one is the complete version (GitHub account) (Use this if you want to test the project using other map and my own robot)
   
   wget 

Option 3: This one is the version presented to Udacity (Dropbox account)

   wget https://www.dropbox.com/s/b29ydipzsgkri9x/Project5_udacity.zip

Option 4: This one is the version presented to Udacity (GitHub account)

   wget https://github.com/andreslc47/Project5_udacity/raw/main/Project5_udacity.zip

If you chose option 1 or option 2:

   unzip Project5_udacity.zip

   cd Project5_udacity

   ./compile_all

   cd src/scripts

   ./home_service.sh

If you chose option 3 or option 4:

   unzip Robotics_Project5.zip

   cd Robotics_Project5

   ./compile_all

   cd src/scripts

   ./home_service.sh


------------------------------------------------------------------------------------------------------------------

If you chose to build the project yourself:

cd /home/andres/Robotics_Project5/src

git clone https://github.com/ros-perception/slam_gmapping.git

git clone https://github.com/turtlebot/turtlebot.git

git clone https://github.com/turtlebot/turtlebot_interactions.git

git clone https://github.com/turtlebot/turtlebot_simulator.git



