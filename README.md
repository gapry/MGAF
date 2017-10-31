# M-GA Framework

## Instructions

>  Check the [building OGRE from source](#building-ogre-from-source) section if anything fails here.

First, clone the repo

```bash
git clone https://github.com/gapry/mgaf
```

Then to run, use [CMake](https://cmake.org/):

```bash
cd mgaf
git checkout master
cd src 
./run.sh
```

## Building OGRE from Source

### Manjaro (or any Arch-Based Linux distribution)

Download the required dependencies:

``` bash
sudo pacman -S 
	libfreetype6-dev 
	libfreeimage-dev 
	libzzip-dev 
	libxrandr-dev 
	libxaw7-dev 
	freeglut3-dev 
	libgl1-mesa-dev 
	libglu1-mesa-dev 
	libcppunit-dev 
	libboost-thread-dev 
	libois-dev 
	mercurial 
	cmake 
	g++ 
	gdb 
	doxygen
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
make -j4
```

Install the library:

```bash
sudo make install
```

