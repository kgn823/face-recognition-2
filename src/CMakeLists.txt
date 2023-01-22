project(FaceRec_Source)

set(FaceRecSrc
    opencv_client.cpp
    image.cpp)

add_library(FaceRec_Source STATIC ${FaceRecSrc})

target_include_directories(FaceRec_Source PUBLIC ../dependencies/include)

