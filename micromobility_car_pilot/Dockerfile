FROM ros2_foxy_docker:latest

RUN pip3 install numpy
USER root
RUN apt-get update \
&& apt-get install -y python3-opencv \
&& pip install simple-pid

USER user

RUN echo "alias swakke='colcon build; . install/setup.bash'" >> ~/.bashrc
