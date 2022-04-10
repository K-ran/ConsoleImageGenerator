#include "resizer.h"
#include <unistd.h>
#include <sys/ioctl.h>
#include <iostream>

void consoleResize(const Mat &src, Mat &des, float wscale, float hscale)
{
    winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    int cRows,cCols;
    int finalRows,finalCols;
    cRows = w.ws_row;
    cCols = w.ws_col;
    std::cout<<"Rows: "<<cRows<<" Cols "<<cCols<<std::endl;
    std::cout<<"RowsImage: "<<src.size().height<<" ColsImage "<<src.size().width<<std::endl;
    float imgRatioRTH = (float)src.size().width/(float)src.size().height;
    
    //if row is preserved
    finalCols = int(cRows*imgRatioRTH);
    if(finalCols<=cCols)
    {
        finalRows = cRows;
    }
    else
    {
        finalRows = int(cCols/imgRatioRTH);
        finalCols = cCols;
    }

    std::cout<<"RowsFinal: "<<finalRows<<" ColsFinal "<<finalCols<<std::endl;
    Mat intermediateImage;
    resize(src,intermediateImage, Size(finalCols,finalRows));
    resize(intermediateImage, des, Size(), wscale, hscale);
}

