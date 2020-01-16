#!/bin/bash

# ==================================
# define some colors for output
# ==================================
COLOR_RED="\033[1;31m"
COLOR_GREEN="\033[1;32m"
COLOR_YELLOW="\033[1;33m"
COLOR_BLUE="\033[1;34m"
COLOR_CYAN="\033[1;36m"
COLOR_WHITE="\033[1;37m"
COLOR_RESET="\033[0m"



# Build test package
echo -e $COLOR_BLUE"Building test package..."$COLOR_RESET
cd ur_test/
./build.sh
echo -e $COLOR_GREEN"Test package built successfully!"$COLOR_RESET
source devel/setup.bash
echo -e $COLOR_BLUE"Launching test node..."$COLOR_RESET
roslaunch ur_test test_delay.launch robot_ip:=localhost
echo -e $COLOR_GREEN"Test node finished!"$COLOR_RESET

