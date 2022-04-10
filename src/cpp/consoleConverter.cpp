#include "consoleConverter.h"
#include <opencv2/opencv.hpp>
#include <iostream>


using namespace cv;
using namespace std;

char asciiMap[] = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/\\|()1{}[]?-_+~<>i!lI;:,\"^`'."; 
//char asciiMap[] = " .:-=+*#%@"; 

char remap(uchar inp)
{
    inp = 255-inp;
    int remapIndex = int((inp/256.0)*(sizeof(asciiMap)/sizeof(char)));
    // cout<<"Mapping: "<<inp<<" -> "<<remapIndex<<endl;
    return asciiMap[remapIndex];
}

void ConsoleBuffer::print(){

    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
           cout<<buffer[i][j]<<""; 
        }
        cout<<endl;
    }
}

void getImageBuffer(ConsoleBuffer &buffer, const Mat &src)
{
    buffer.height = src.size().height;
    buffer.width = src.size().width;
    for(int i=0;i<buffer.height;i++)
    {
        for(int j=0;j<buffer.width;j++)
        {
            buffer.buffer[i][j] = remap(src.at<uchar>(i,j));
        }
    }
}
