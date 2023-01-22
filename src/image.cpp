#include <opencv2/opencv.hpp>
#include "image.h"

void Image::m_ImageSetter(cv::Mat mat) {
    m_Image = mat;
}

cv::Mat Image::m_ImageGetter(){
    return m_Image;
}
