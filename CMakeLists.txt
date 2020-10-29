cmake_minimum_required(VERSION 3.16)
project(opencv_test)

set(CMAKE_CXX_STANDARD 14)



find_package(OpenCV)

if(OpenCV_FOUND)

    message("OpenCV found")
    message("OpenCV_INCLUDE_DIRS = ${OpenCV_INCLUDE_DIRS}")
endif()


include_directories(${OpenCV_INCLUDE_DIRS})


add_executable(opencv_test main.cpp)
target_link_libraries(opencv_test ${OpenCV_LIBS})
