FROM ros2_foxy_docker:latest

RUN pip3 install numpy
USER root
RUN apt-get update \
&& apt-get install -y libopencv-dev \
&& apt-get install -y python3-opencv \
&& apt-get install -y libbluetooth-dev \
&& apt-get install -y bluetooth \
&& apt-get install -y bluez \
&& apt-get install -y python3-opencv \
&& apt-get install -y bluez-tools \
&& pip3 install pybluez \
&& apt-get install -y libssl-dev libusb-1.0-0-dev pkg-config libgtk-3-dev 

USER user

RUN echo "alias swakke='colcon build; . install/setup.bash'" >> ~/.bashrc
