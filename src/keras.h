#ifndef KERAS_H
#define KERAS_H

#include "image.h"

class Keras{
    public:
    // Keras();
    // ~Keras();
    size_t Predict_Image(std::string filePath,Image image);
};

#endif