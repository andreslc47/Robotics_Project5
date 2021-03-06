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

      cd ~

##########################
ORIGINAL PROJECT SUBMITTED
##########################

Option 1: Dropbox account:

      wget https://www.dropbox.com/s/b29ydipzsgkri9x/Project5_udacity.zip

Option 2: GitHub account:

      wget https://github.com/andreslc47/Project5_udacity/raw/main/Project5_udacity.zip

once downloaded:

      unzip Project5_udacity.zip
      cd Project5_udacity
      ./compile_all
      cd src/scripts

         ./test_slam.sh
         ./test_navigation.sh
         ./pick_objects.sh
         ./add_marker.sh
         ./home_service.sh


###########################
FULL VERSION OF THE PROJECT
###########################

Use this one if you want to test the previous project and the one using another map and my own robot

Option 1: Dropbox account:

      wget https://www.dropbox.com/s/esm39s66fce5d9l/Robotics_Project5.zip

Option 2: GitHub account:

      wget https://github.com/andreslc47/Robotics_Project5/raw/main/Robotics_Project5.zip

once downloaded:

      unzip Robotics_Project5.zip
      cd Robotics_Project5
      ./compile_all
      cd src/scripts/my_robot/udacityoffice

         ./test_slam.sh
         ./test_navigation.sh
         ./pick_objects.sh
         ./add_marker.sh
         ./home_service.sh
  
  Edit every script of my_robot/simpleworld to match the path of the world_file and map_file according to your local pc.
  
      cd src/scripts/my_robot/simpleworld

         ./test_slam.sh
         ./test_navigation.sh
         ./pick_objects.sh
         ./add_marker.sh
         ./home_service.sh
      
      cd src/scripts/turtlebot/udacityoffice

         ./test_slam.sh
         ./test_navigation.sh
         ./pick_objects.sh
         ./add_marker.sh
         ./home_service.sh
  
  Edit every script of turtlebot/simpleworld to match the path of the world_file and map_file according to your local pc.
  
      cd src/scripts/turtlebot/simpleworld

         ./test_slam.sh
         ./test_navigation.sh
         ./pick_objects.sh
         ./add_marker.sh
         ./home_service.sh


#############################
BUILD THE PROJECT BY YOURSELF
#############################

      mkdir -p ~/Robotics_Project5/src
      cd ~/Robotics_Project5/src
      catkin_init_workspace
      cd ~/Robotics_Project5/
      catkin_make
      cd ~/Robotics_Project5/src
      git clone https://github.com/ros-perception/slam_gmapping.git
      git clone https://github.com/turtlebot/turtlebot.git
      git clone https://github.com/turtlebot/turtlebot_interactions.git
      git clone https://github.com/turtlebot/turtlebot_simulator.git

and follow your own intuition to complete the rest of the project ................... =)




#####################
DOWNLOAD ALL PROJECTS
#####################

      #!/bin/bash

      cd ~
      mkdir UDACITY_PROJECTS
      cd ~/UDACITY_PROJECTS
      git clone https://github.com/andreslc47/Robotics_Project1.git
      git clone https://github.com/andreslc47/Robotics_Project2.git
      git clone https://github.com/andreslc47/Robotics_Project3.git
      git clone https://github.com/andreslc47/Robotics_Project4.git
      cd ~/UDACITY_PROJECTS/Robotics_Project4
      wget https://www.dropbox.com/s/w4ssoblkn4ylqw3/rtabmap.db
      cd ~/UDACITY_PROJECTS
      #wget https://www.dropbox.com/s/b29ydipzsgkri9x/Project5_udacity.zip
      wget https://github.com/andreslc47/Project5_udacity/raw/main/Project5_udacity.zip
      unzip Project5_udacity.zip
      rm Project5_udacity.zip
      #wget https://www.dropbox.com/s/esm39s66fce5d9l/Robotics_Project5.zip
      wget https://github.com/andreslc47/Robotics_Project5/raw/main/Robotics_Project5.zip
      unzip Robotics_Project5.zip
      rm Robotics_Project5.zip






