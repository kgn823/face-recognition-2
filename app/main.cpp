#include <opencv2/opencv.hpp>
#include <unistd.h>
#include <tensorflow/c/c_api.h>
#include <stdio.h>
#include "opencv_client.h"
#include "../src/opencv_video.h"
#include "../src/image.h"

using namespace cv;
int main(int argc, char** argv)

{
    OpenCV_Video echo;

    Image testImage;

    echo.CameraOn(testImage);
    if(echo.cameraState) {
        std::cout << "Camera is on" << std::endl;
    }

    sleep(5);
    if(testImage.m_ImageGetter().empty()) {
        std::cout << "testImage is empty" << std::endl;
    }
    echo.CameraOff();
    if(!echo.cameraState) {
        std::cout << "Camera is off" << std::endl;
    }
    
    printf("Hello from TensorFlow C library version %s\n", TF_Version());

    if (argc != 2) {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    OpenCV_Client client;

    // namedWindow("Display Image", WINDOW_AUTOSIZE);
    // imshow("Display Image", testImage.m_ImageGetter());
    client.OpenCvExportFile("Andre.png",testImage);
    waitKey(0);
    return 0;
}