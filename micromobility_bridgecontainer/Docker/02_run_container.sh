#!/bin/bash

docker run -t -it --rm --network micromobility --name micromobility_bridgecontainer -d micromobility_bridgecontainer:latest -v `pwd`/./ros2-web-bridge/:/home/user/ros2-web-bridge
