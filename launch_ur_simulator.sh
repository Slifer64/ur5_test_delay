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


# Launch ur simulator
echo -e $COLOR_BLUE"Launching ur-simulator..."$COLOR_RESET
./ur_simulator/ursim-3.10.0.76181/start-ursim.sh &
echo -e $COLOR_GREEN"Ur-simulator is running"$COLOR_RESET
