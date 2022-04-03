#include <stdio.h>
#include <opencv2/opencv.hpp>
#include "resizer.h"
#include "consoleConverter.h"
using namespace cv;
using namespace std;

int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    Mat image, gImage, resizedImage;
    image = imread( argv[1], 1 );
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    cvtColor(image, gImage, COLOR_BGR2GRAY);
    /*resize image*/
    consoleResize(gImage,resizedImage);

    ConsoleBuffer buffer;
    getImageBuffer(buffer,resizedImage);
    buffer.print();
    //namedWindow("Display Image", WINDOW_AUTOSIZE );
    //imshow("Display Image", resizedImage);
    //waitKey(0);
    
    return 0;
}
