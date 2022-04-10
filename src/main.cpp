#include <stdio.h>
#include <opencv2/opencv.hpp>
#include "resizer.h"
#include "consoleConverter.h"
#include "args.hxx"

using namespace cv;
using namespace std;

int main(int argc, char** argv )
{
   
    
    args::ArgumentParser parser("ASCII art generator. \nRun: ./cvp image_path [Options]", "");
    args::HelpFlag help(parser, "help", "Displays this help", {'h', "help"});        
    args::Positional<std::string> foo(parser, "image_file", "The image file path");
    args::ValueFlag<float> scaleW(parser, "", "Scale width", {"ws"});
    args::ValueFlag<float> scaleH(parser, "", "Scale height", {"hs"});
  
    if ( argc < 2 )
    {
        cout<<parser;
        return -1;
    }

    try
    {
        parser.ParseCLI(argc, argv);
    }
    catch (args::Help)
    {
        std::cout << parser;
        return 0;
    }
    catch (args::ParseError e)
    {
        std::cerr << e.what() << std::endl;
        std::cerr << parser;
        return 1;
    }
    catch (args::ValidationError e)
    {
        std::cerr << e.what() << std::endl;
        std::cerr << parser;
        return 1;
    }
    

    float wscale = 1;
    float hscale = 1;

    if(scaleW)
    {
        wscale = args::get(scaleW);
    }
    if(scaleH)
    {
        hscale = args::get(scaleH);
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
    consoleResize(gImage,resizedImage,wscale,hscale);

    ConsoleBuffer buffer;
    getImageBuffer(buffer,resizedImage);
    buffer.print();
    //namedWindow("Display Image", WINDOW_AUTOSIZE );
    //imshow("Display Image", resizedImage);
    //waitKey(0);
    
    return 0;
}
