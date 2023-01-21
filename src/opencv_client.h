#include "opencv2/core.hpp"
#include "opencv/objdetect.hpp"
#include "opencv/imgproc.hpp"

// OpenCv also includes high-level gui
// #include "opencv/highgui.hpp"



class OpenCV_Client { 
    public: 
    OpenCV_Client();
    ~OpenCV_Client();

    bool OpenCvImportFile();
    bool OpenCvDeportFile();

    bool OpenCvProcessFace();
    
    private: 
    

}