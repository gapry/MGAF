#!/bin/bash

EXEC=Ogre3D
BUILD_DIR=build
BIN_DIR=bin

astyle \
	--style=kr \
	--indent=spaces=4 \
	--indent-switches \
	--suffix=none *.cpp *.h

if [ -e ../$BUILD_DIR ]
then
	rm -rf ../$BUILD_DIR
fi

if [ -e ../$BIN_DIR ]
then
	rm -rf ../$BIN_DIR
fi

clear
mkdir ../$BUILD_DIR
cd ../$BUILD_DIR
cmake ..
make -j4
cd ../$BIN_DIR/
./$EXEC
