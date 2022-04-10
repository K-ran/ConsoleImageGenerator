# ConsoleImageGenerator
This application generates an ASCII art from the an image file.

## Build Steps:
1. git clone https://github.com/K-ran/ConsoleImageGenerator/
2. cd ConsoleImageGenerator
3. git submodule update --init
4. Build opencv
   1. mkdir build
   2. cd build
   3. cmake ../opencv
   4. make
   5. cd .. 
5. cmake .
6. make

## Usage:
`
./cvp imagepath [--ws width_scaling] [--hs height_scaling]
`
### Example:
./cvp testImage.jpg
