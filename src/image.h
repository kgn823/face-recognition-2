#ifndef IMAGE_H
#define IMAGE_H

#include <opencv2/objdetect.hpp>
#include <opencv2/opencv.hpp>



class Image {
    
    public:
        // cv::CascadeClassifier m_ImageSetter(cv::Mat mat);
        void m_ImageSetter(cv::Mat mat); // this is to SET m_Image
        
        //TODO: Define m_Image GETTER function
        cv::Mat m_ImageGetter();
    private:
        cv::Mat m_Image; 
};

#endif