#include "image.h"



// cv::CascadeClassifier Image::m_ImageSetter(cv::Mat mat){
//     std::vector<cv::Rect> features;
//     cv::CascadeClassifier mLoad;
//     cv::String haar = "/home/cnguyen-dev/face-recognition-2/src/haarcascade_frontalface_default.xml";
   
//     if( mLoad.load(haar)){

//     mLoad.detectMultiScale(mat,features,1.3,5);
//     for(auto feature : features){
//         cv::rectangle(mat,feature,cv::Scalar(0,255,0),3);
//     };
//     }

//     m_Image = mat;
    
// }

void Image::m_ImageSetter(cv::Mat mat) {
    m_Image = mat;
}

cv::Mat Image::m_ImageGetter(){
    return m_Image;
}
