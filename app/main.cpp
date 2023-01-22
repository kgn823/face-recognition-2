#include <opencv2/opencv.hpp>
#include <tensorflow/c/c_api.h>
#include <stdio.h>
#include "opencv_client.h"

using namespace cv;
int main(int argc, char** argv)
// When you execute ./FaceRec, you also define arguments
// argc: number of arguments, aka arg count
// argv: actual arguments, aka arg value (these are in the form of string inputs, or char*)

// example: ./FaceRec /home/facerec_images/Image.jpg
//          ARG 0     ARG 1

// example: ./FaceRec 312    2324  this-arg  42
//          ARG0      ARG1   ARG2  ARG3      ARG4


// ASIDE:
// When you define a function, you can set parameters.
// There are two main ways you can define them.
// void Function1(int num, std::string text);
// void Function2(int num, std::string text = "This String");
// void Function3(int num = 1, std::string text);

// The equals  sign in the parameters are DEFAULT VALUES. So, if the user, does
// not define a value for a parameter, it will default to whatever you equated to.


{
    printf("Hello from TensorFlow C library version %s\n", TF_Version());

    if (argc != 2) {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }

    //==============================
    Image imageVariable;
 
    OpenCV_Client client;
    imageVariable = client.OpenCvImportFile(argv[1],1);
    
    if (!(imageVariable.m_ImageGetter()).data) {
        printf("No image data \n");
        return -1;
    }
    //==============================

    namedWindow("Display Image", WINDOW_AUTOSIZE);
    imshow("Display Image", imageVariable.m_ImageGetter());
    waitKey(0);
    return 0;
}