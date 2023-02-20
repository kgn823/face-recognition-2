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

bool OpenCV_Client::OpenCvExportFile(std::string filePath, Image imageObject){
    // Export file 
    // Export file that was imported by OpenCvImportFile which is a Image
    if(imageObject.m_ImageGetter().empty()) {
        std::cout << "image has no data" << std::endl;
        return false;
    }
    if(cv::imwrite(filePath, imageObject.m_ImageGetter())) {
        std::cout << "Saved file to " << filePath << std::endl;
        return true;
    }
    return false; 
}
// int OpenCV_Client::getMemberVariable() { return memberVariable; }

// void OpenCV_Client::setMemberVariable(int number) { memberVariable = number; }



