#include "keras.h"
#include "fdeep/fdeep.hpp"

bool Keras::Predict_Image(std::string filePath,Image image){
    
    auto model = fdeep::load_model(filePath); // load converted model
    cv::Mat pImage = image.m_ImageGetter();
     // 1 channel image
     assert(pImage.isContinuous());
    cv::cvtColor(pImage,pImage,cv::COLOR_BGR2GRAY);
    cv::resize(pImage,pImage,cv::Size(200,200)); // resized to 70x70 (Model in Python trained )
   

    // Mat to tensor
    const auto input = fdeep::tensor_from_bytes(pImage.ptr(),
        static_cast<std::size_t>(200),
        static_cast<std::size_t>(200),
        static_cast<std::size_t>(1),
        0,255);

  
    auto result = model.predict_single_output({input});
    std::cout << result << std::endl;


    
    if(result == 1){
        
        std::cout << "Face Detected!" << std::endl;
        return true;
    }else{
        std::cout << "Face Failed" << std::endl;
        return false;
    }
 
    
}