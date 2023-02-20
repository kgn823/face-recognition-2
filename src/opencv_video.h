#ifndef OPENCV_VIDEO_H
#define OPENCV_VIDEO_H

#include <opencv2/opencv.hpp> 
#include <opencv2/videoio.hpp>

#include "image.h"

// video capture and object detection 
class OpenCV_Video {
    public:
        OpenCV_Video(); // default constructor
        ~OpenCV_Video(); // default destructo
        bool CameraOn(Image &image);
        bool CameraOff();
        cv::VideoCapture mCapture;
        bool cameraState = false;
};


/*
enum class someEnums {
    TEST1,
    TEST2,
    TEST3,
    TEST4
};

someEnums = TEST1;
int number = (int)someEnums;`
*/

#endif