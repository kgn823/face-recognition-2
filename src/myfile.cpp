#include "myfile.h"

void retrieveFile::Compare_Face(bool faceDetected){
        std::ifstream myFile;
        if(faceDetected){
            
            std::string calvin;
            myFile.open("/home/cnguyen-dev/face-recognition-2/mypasswords.txt");
            while(std::getline(myFile,calvin)){

            std::cout << calvin << std::endl;
            };
        }else{
            std::cout<<"Face Recognition Failed. Try Again" << std::endl;
        }
    
}

