# micromobility_car_object_avoidance
This repository is part of PXL Smart-ICT's Micromobility project. 

## 1) Build foxy container && micromobility_sensorcontainer
[ROS2FOXYDOCKER](https://github.com/PXLAIRobotics/ROS2FoxyDocker)

[micromobility_sensorcontainer](https://github.com/PXLRoboticsLab/micromobility_sensorcontainer.git)

## 2) Build micromobility containers
[micromobility_bridgecontainer](https://github.com/andyindemans/MicroMobility_Golfcart_Combined/tree/main/micromobility_bridgecontainer)

[micromobility_car_navigation](https://github.com/andyindemans/MicroMobility_Golfcart_Combined/tree/main/micromobility_car_navigation)

[micromobility_car_object_avoidance](https://github.com/andyindemans/MicroMobility_Golfcart_Combined/tree/main/micromobility_car_object_avoidance)

[micromobility_car_pilot](https://github.com/andyindemans/MicroMobility_Golfcart_Combined/tree/main/micromobility_car_pilot)

## 3) Start containers
````
./1_micromobility_car_start_containers.sh
````

## 4) Node server starten
### Open new terminal window
````
cd dashboard/nodejs
node server.js
````

Open index.html

## 5) Bridge container starten
````
cd micromibility_bridgecontainer
docker-compose up
````

## 6) Micromobility_car_pilot
[micromobility_car_pilot](https://github.com/andyindemans/MicroMobility_Golfcart_Combined/tree/main/micromobility_car_pilot)

### Navigate to micromobility_car_pilot terminal
````
cd Project
./1_pilot_startup.sh
````

## 7) Micromobility_car_navigation
[micromobility_car_navigation](https://github.com/andyindemans/MicroMobility_Golfcart_Combined/tree/main/micromobility_car_navigation)
### Navigate to micromobility_car_navigation terminal
````
cd Project
./1_navigation_startup.sh
````
