
#include <unistd.h>
#include <stdio.h>
#include "opencv_client.h"
#include "../src/opencv_video.h"
#include "../src/image.h"
#include "../src/keras.h"

using namespace cv;
int main(int argc, char** argv)

{
    std::cout << CV_VERSION << std::endl;
    // OpenCV_Video echo;

    Image testImage;
    
    // echo.CameraOn(testImage);
    // if(echo.cameraState) {
    //     std::cout << "Camera is on" << std::endl;
    // }

    // sleep(2);
    // if(testImage.m_ImageGetter().empty()) {
    //     std::cout << "testImage is empty" << std::endl;
    // }
    // echo.CameraOff();
    // if(!echo.cameraState) {
    //     std::cout << "Camera is off" << std::endl;
    // }
    
    // printf("Hello from TensorFlow C library version %s\n", TF_Version());

    if (argc != 2) {
        printf("Pass in a filepath for model\n");
        return -1;
    }
    
    OpenCV_Client client;
   
    Keras testKeras;
    std::string fp = argv[1];
    // client.OpenCvExportFile("Andre.png",testImage);
    Image andre2 =client.OpenCvImportFile("/home/cnguyen-dev/face-recognition-2/assets/images/"+fp +".jpg",1);

    
    testKeras.Predict_Image("/home/cnguyen-dev/face-recognition-2/assets/models/keras_mevsrandom_dense64.json", andre2);

    // namedWindow("Display Image", WINDOW_AUTOSIZE);
    // imshow("Display Image", testImage.m_ImageGetter());
    
    
    
    
    return 0;
}