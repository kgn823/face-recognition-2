#include "opencv_client.h"
#include <iostream>

// What do we want this function to do: 

// INPUT: std::string FilePath, int flag
// OUTPUT: cv::Mat class object

// We'll be using cv::Mat to do OpenCV related things

// ASIDE: 
// When you are "importing" data into a library-specific memory, you are
// DECODING

// When you are "exporting" data out of library-specific memory, you are
// ENCODING

OpenCV_Client::OpenCV_Client() { std::cout << "Created OpenCV Client" << std::endl; }
OpenCV_Client::~OpenCV_Client() { std::cout << "Destroyed OpenCV Client" << std::endl; }

Image OpenCV_Client::OpenCvImportFile(std::string filePath ,int flag){
    Image importedImage; // at this point, Image::m_Image is uninitialized
    
    // importedImage type = Image
    // imread return type = cv::Mat
    // importedImage.m_Image type = cv::Mat

    importedImage.m_ImageSetter(cv::imread(filePath, flag));
    return importedImage;
} 

// int OpenCV_Client::getMemberVariable() { return memberVariable; }

// void OpenCV_Client::setMemberVariable(int number) { memberVariable = number; }



