#ifndef OPENCV_CLIENT_H
#define OPENCV_CLIENT_H

#include <opencv2/opencv.hpp>
#include "image.h"

// OpenCv also includes high-level gui  
// #include "opencv/highgui.hpp"

class OpenCV_Client { 
    public: 
    OpenCV_Client();
    ~OpenCV_Client();

    Image OpenCvImportFile(std::string filePath,int flag);
    bool OpenCvDeportFile();

    bool OpenCvProcessFace();

    void setMemberVariable(int number);
    int getMemberVariable();
    
    private: 

    // int memberVariable; 

    // OpenCV_Client test = OpenCV_Client();
    // test.memberVariable = 12; //Illegal, because memberVariable is private

    // int numberFromOpenCV = test.memberVariable;

    // test.setMemberVariable(12);  // Legal, because setMemberVariable is public

};

#endif