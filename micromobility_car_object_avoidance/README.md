# micromobility_car_object_avoidance
This repository is part of PXL Smart-ICT's Micromobility project. 


After build use following commands:

  sudo chmod 777 /dev/video0 \
  sudo chmod 777 /dev/video1

Start realsense node:
  ros2 launch realsense2_camera rs_launch.py

## 1) Build foxy container
[ROS2FOXYDOCKER](https://github.com/PXLAIRobotics/ROS2FoxyDocker)

## 2) Build the docker image
````
./01_build_image.sh
````

## 3) Start container
````
./02_start_container
````

## 4) Setup
````
cd Projects/dev_ws
colcon build
. install/local_setup.bash
````
