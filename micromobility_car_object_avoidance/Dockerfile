FROM micromobility_sensorcontainer:latest

RUN pip3 install numpy
USER root
RUN apt-get update 
RUN apt-get install -y software-properties-common 
RUN apt-get install -y libopencv-dev 
RUN apt-get install -y python3-opencv 
RUN apt-get install -y ros-foxy-cv-bridge 
RUN apt-get install -y ros-foxy-image-transport ros-foxy-image-transport-plugins 
RUN pip3 install opencv-python-headless
USER user
RUN echo "alias swakke='colcon build; . install/setup.bash'" >> ~/.bashrc
