# M-GA Framework

## Instructions

>  Check the [building OGRE from source](#building-ogre-from-source) section if anything fails here.

First, clone the repo (or fork it!):

```bash
git clone https://github.com/gapry/mgaf
```

Then to run, use [CMake](https://cmake.org/):

```bash
cd mgaf
git checkout mainline
cd src 
./run.sh
```

## Building OGRE from Source

#### Note: If you're using the ecc computers at the University of Nevada, Reno, the following steps are not required. The library has already been built from source and installed. However, if you are using NoMachine the code will compile but to run you must use the command below:
> /usr/NX/scripts/vgl/vglrun \<your project's .bin path here\>

Ogre 3D must be installed. If it isn't installed you should build it from the source with the following commands.  Mercurial is required to clone the repo.


### Ubuntu (or any Debian-Based Linux distribution)

Download the required dependencies:

``` bash
sudo apt-get install libfreetype6-dev libfreeimage-dev libzzip-dev libxrandr-dev libxaw7-dev freeglut3-dev libgl1-mesa-dev libglu1-mesa-dev libcppunit-dev libboost-thread-dev libois-dev mercurial cmake g++ gdb doxygen
```

Clone the repo and grab version 1.9:

```bash
hg clone https://bitbucket.org/sinbad/ogre
cd ogre
hg pull
hg update v1-9
```

Use cmake to generate a makefile:

```bash
mkdir build
cd build
cmake ..
```

Build OGRE:

```bash
make -j5
```

Install the library:

```bash
sudo make install
```

