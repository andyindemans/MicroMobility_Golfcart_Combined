# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.16.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(darknet-download-populate NONE)

include(ExternalProject)
ExternalProject_Add(darknet-download-populate
                     "UPDATE_DISCONNECTED" "False" "GIT_REPOSITORY" "https://github.com/pjreddie/darknet.git" "GIT_TAG" "61c9d02ec461e30d55762ec7669d6a1d3c356fb2"
                    SOURCE_DIR          "/home/user/Projects/dev_ws/build/darknet_vendor/_deps/darknet-download-src"
                    BINARY_DIR          "/home/user/Projects/dev_ws/build/darknet_vendor/_deps/darknet-download-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)
