FROM ros2_foxy_docker:latest

# Install nvm, Node.js and node-gyp
# RUN mkdir .nvm
# ENV NODE_VERSION v12.19.1
# ENV NVM_VERSION v0.37.0
# ENV NVM_DIR /home/user/.nvm
# ENV INSTALL_DIR /home/user/.nvm

# RUN wget -qO- https://raw.githubusercontent.com/nvm-sh/nvm/${NVM_VERSION}/install.sh | bash \
# 	&& chmod +x $HOME/.nvm/nvm.sh

# RUN . "$HOME/.nvm/nvm.sh" && nvm install ${NODE_VERSION}
# RUN . "$HOME/.nvm/nvm.sh" && nvm use ${NODE_VERSION}
# RUN . "$HOME/.nvm/nvm.sh" && nvm alias default $NODE_VERSION

# RUN echo 'PATH=/home/user/.nvm/versions/node/v12.19.1:$PATH' >> ~/.bashrc

# #RUN . "$HOME/.nvm/nvm.sh" && node --version

# RUN git clone https://github.com/RobotWebTools/ros2-web-bridge.git
# RUN /bin/bash -c '. "$HOME/.nvm/nvm.sh"; cd ros2-web-bridge; npm install'

USER root
RUN apt-key adv --keyserver keyserver.ubuntu.com --recv-keys F42ED6FBAB17C654
RUN apt-get update
RUN apt-get -y install curl gnupg
RUN curl -sL https://deb.nodesource.com/setup_12.x | bash -
RUN apt-get -y install nodejs

USER user

RUN mkdir Projects/dev_ws/src/mm_interfaces

ENV AMENT_PREFIX_PATH="/home/user/Projects/dev_ws/src/mm_interfaces:$AMENT_PREFIX_PATH"

COPY mm_interfaces Projects/dev_ws/src/mm_interfaces
RUN /bin/bash -c '. /opt/ros/foxy/setup.bash; cd /home/user/Projects/dev_ws; colcon build'

RUN git clone https://github.com/RobotWebTools/ros2-web-bridge.git
RUN /bin/bash -c '. /opt/ros/foxy/setup.bash; . /home/user/Projects/dev_ws/install/local_setup.bash; cd ros2-web-bridge; npm install'

WORKDIR ros2-web-bridge

STOPSIGNAL SIGTERM

ENTRYPOINT /bin/bash -c '. /opt/ros/foxy/setup.bash; . /home/user/Projects/dev_ws/install/local_setup.bash; node bin/rosbridge.js'
