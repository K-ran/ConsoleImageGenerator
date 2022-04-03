#ifndef CONSOLE_CONVETER_H
#define CONSOLE_CONVETER_H
#include <opencv2/opencv.hpp>

using namespace cv;

#define MAX_CONSOLE_DIM 1024

struct ConsoleBuffer
{
    int width; //Cols
    int height;//Rows
    char buffer[MAX_CONSOLE_DIM][MAX_CONSOLE_DIM];

    void print();
};


void getImageBuffer(ConsoleBuffer &buffer, const Mat &src);

#endif
