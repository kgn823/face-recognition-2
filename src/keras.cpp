#include "keras.h"
#include "fdeep/fdeep.hpp"

size_t Keras::Predict_Image(std::string filePath,Image image){
    cv::Mat pImage = image.m_ImageGetter();

    cv::cvtColor(pImage, pImage, cv::COLOR_BGR2RGB);
    assert(pImage.isContinuous());
     auto model = fdeep::load_model(filePath);
    // Use the correct scaling, i.e., low and high.
    auto input = fdeep::tensor_from_bytes(pImage.ptr(),
        static_cast<std::size_t>(70),
        static_cast<std::size_t>(70),
        static_cast<std::size_t>(1),
        0.0f, 1.0f);

    auto result = model.predict({input});
    std::cout << fdeep::show_tensors(result) << std::endl;
    
}