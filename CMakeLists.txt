cmake_minimum_required(VERSION 3.11)

add_subdirectory(src)

find_package( OpenCV REQUIRED )

set (CMAKE_CXX_STANDARD 17)

include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR}/dependencies/include/)
include_directories(${CMAKE_SOURCE_DIR}/src)

link_directories(${CMAKE_SOURCE_DIR}/dependencies/lib)

find_package(frugally-deep CONFIG REQUIRED)

add_executable(FaceRec app/main.cpp)

target_link_libraries(FaceRec PRIVATE ${OpenCV_LIBS} opencv_core opencv_videoio opencv_highgui opencv_objdetect opencv_imgproc opencv_imgcodecs ${frugally-deep_LIBS} frugally-deep::fdeep src)

add_subdirectory(app)
