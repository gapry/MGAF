#!/bin/bash

EXEC=Ogre3D
BUILD_DIR=build
BIN_DIR=bin

if [ -e ../$BUILD_DIR ]
then
	rm -rf ../$BUILD_DIR
fi

clear
mkdir ../$BUILD_DIR
cd ../$BUILD_DIR
cmake ..
make -j4
cd ../$BIN_DIR/
./$EXEC
