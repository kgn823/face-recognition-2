project(FaceRec_App)

set(FaceRecSrc
    main.cpp)

add_library(FaceRec_App STATIC ${FaceRecSrc})

include_directories(${CMAKE_SOURCE_DIR}/src)
target_include_directories(FaceRec_App PUBLIC ../dependencies/include)

