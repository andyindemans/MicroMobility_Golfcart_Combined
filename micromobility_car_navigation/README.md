# micromobility_car_navigation
## This repository is part of PXL Smart-ICT's Micromobility project. 


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
## 4) This command has to be executed inside of the container before you can run the pathfinding service:  \
````
export PYTHONPATH="${PYTHONPATH}:/home/user/Projects/dev_ws/src/pathfinding/pathfinding/"
````
