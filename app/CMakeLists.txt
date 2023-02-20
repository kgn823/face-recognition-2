cmake_minimum_required(VERSION 3.11)

project(FaceRec_App)

add_executable(FaceRec_App main.cpp)

target_link_libraries(FaceRec_App PRIVATE ${OpenCV_LIBS} opencv_core opencv_videoio opencv_highgui ${FACE_REC_LIBS} src)

