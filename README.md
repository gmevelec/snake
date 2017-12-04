# Snake
Simple snake game

### Requirements

CMake 3.6.0 https://cmake.org/download/

##### SFML dependencies for linux only
    sudo apt-get install cmake-gui libpthread-stubs0-dev libgl1-mesa-dev libx11-dev libxrandr-dev libfreetype6-dev libglew1.5-dev libjpeg8-dev libsndfile1-dev libopenal-dev libudev-dev

### How to run
git clone https://github.com/gmevelec/snake
cd snake
git submodule update --init

cmake CMakelists.txt
make
./snake
