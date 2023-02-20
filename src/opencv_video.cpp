#include <iostream>
#include <unistd.h>
#include "opencv_video.h"


OpenCV_Video::~OpenCV_Video() { std::cout << "Destroyed OpenCV Client" << std::endl; }


OpenCV_Video::OpenCV_Video() : mCapture(0) {} // initializer list

bool OpenCV_Video::CameraOn(Image &image){
    cv::Mat myImage;
    if(!(mCapture.isOpened())) {
        std::cout << "Can't open camera" << std::endl;
        return false;
    }  
    cameraState = true; 
    while(cameraState == true){
        mCapture >> myImage;
        if(!(myImage.empty())) {
            image.m_ImageSetter(myImage);
            if(image.m_ImageGetter().empty()){
                std::cout << "Can't save to Image" << std::endl;
                return false;
            }
        } else {
            sleep(1);
            std::cout << "Data is empty" << std::endl;
        }
    return true;
    }
}
bool OpenCV_Video::CameraOff(){
    cameraState = false;
    if(!mCapture.isOpened()) {
        return true;
    } else {
        return false;  
    }
    return true;
}



