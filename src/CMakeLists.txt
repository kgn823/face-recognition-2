cmake_minimum_required(VERSION 3.11)

project(src)

set(SRC
    image.cpp
    opencv_client.cpp
    opencv_video.cpp
    keras.cpp)

add_library(src STATIC ${SRC})

target_include_directories(src PUBLIC ${CMAKE_SOURCE_DIR}/dependencies/include)
