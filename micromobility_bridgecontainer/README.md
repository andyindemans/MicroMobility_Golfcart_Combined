# Micromobility bridge container

This container is reponsible for bridging ROS2 with websocket connections based on the ROS bridge protocol v2.

It uses [ros2-web-bridge](https://github.com/RobotWebTools/ros2-web-bridge) as the base but with a custom Dockerfile so
that it can run on ROS2 Foxy Fitzroy.

## Installation

Run `01_build_image.sh` to build the image.

## Usage

Run `02_run_container.sh` to start the image. It will use the host network and run in the background. Stop the container
with `docker stop micromobility_bridgecontainer`.
