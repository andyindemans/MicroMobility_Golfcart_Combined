#!/bin/bash
#this script is used to run all the micromobility_car containers

#stop all micromobility_car_containers
docker container stop micromobility_car_navigation_container micromobility_car_object_avoidance_container micromobility_car_pilot_container

#remove micromobility_car containers
docker container rm micromobility_car_navigation_container micromobility_car_object_avoidance_container micromobility_car_pilot_container

#run all containers
docker run -d -it --net host --privileged --env-file cart-settings.txt --env="DISPLAY" -v $HOME/.Xauthority:/root/.Xauthority -v /dev/shm:/dev/shm -v $PWD/micromobility_car_navigation/local/Project:/home/user/Projects --name micromobility_car_navigation_container micromobility_car_navigation /bin/bash
docker run -d -it --net host --privileged --env-file cart-settings.txt --env="DISPLAY" -v $HOME/.Xauthority:/root/.Xauthority -v /dev/shm:/dev/shm -v $PWD/micromobility_car_object_avoidance/local/Project:/home/user/Projects --name micromobility_car_object_avoidance_container micromobility_car_object_avoidance /bin/bash
docker run -d -it --net host --env-file cart-settings.txt -v /dev/shm:/dev/shm -v $PWD/micromobility_car_pilot/local/Project:/home/user/Projects --name micromobility_car_pilot_container micromobility_car_pilot /bin/bash

#print running containers
docker ps

#open terminal windows in containers
gnome-terminal --title="NAVIGATION CONTAINER" -- docker exec -it micromobility_car_navigation_container bash
gnome-terminal --title="OBJECT AVOIDANCE CONTAINER" -- docker exec -it micromobility_car_object_avoidance_container bash
gnome-terminal --title="PILOT CONTAINER" -- docker exec -it micromobility_car_pilot_container bash
