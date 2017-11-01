#!/bin/bash

EXEC=Ogre3D
BUILD_DIR=build
BIN_DIR=bin
LOG_FILE=Ogre.log
SRC_DIR=src

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
cd ..

if [ -e ./$BIN_DIR/$EXEC ]
then
	cd ./$BIN_DIR
	cp ../$SRC_DIR/ogre.cfg ./
	./$EXEC
	clear
	cat $LOG_FILE | grep dbg
fi
