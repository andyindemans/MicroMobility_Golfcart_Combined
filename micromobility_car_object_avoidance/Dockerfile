FROM micromobility_sensorcontainer:latest

RUN pip3 install numpy
USER root
RUN apt-get update 
RUN apt-get install -y software-properties-common 
RUN apt-get install -y libopencv-dev 
RUN apt-get install -y python3-opencv 
RUN apt-get install -y python-numpy
RUN apt-get install -y ros-foxy-cv-bridge 
RUN apt-get --fix-missing update
RUN apt-get install -y ros-foxy-image-transport ros-foxy-image-transport-plugins 
RUN pip3 install --upgrade pip
RUN pip3 install --upgrade setuptools
RUN pip3 install opencv-python pandas tensorflow-gpu 
RUN pip3 install --upgrade tensorflow-hub
RUN pip3 install pyrealsense2
RUN apt-get install -y libssl-dev libusb-1.0-0-dev pkg-config libgtk-3-dev
RUN apt-get install -y libglfw3-dev libgl1-mesa-dev libglu1-mesa-dev
USER user
RUN echo "alias swakke='colcon build; . install/setup.bash'" >> ~/.bashrc
