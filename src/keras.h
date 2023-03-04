#ifndef KERAS_H
#define KERAS_H

#include <opencv2/imgcodecs.hpp>

#include "image.h"


class Keras{
    public:
    // Keras();
    // ~Keras();
    bool Predict_Image(std::string filePath,Image image);
};

#endif 