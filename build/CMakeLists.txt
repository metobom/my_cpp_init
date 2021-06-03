cmake_minimum_required (VERSION 2.8)
project(example_project)
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11" )
set( OpenCV_DIR "/usr/share/OpenCV" )
set( PKG_CONFIG_PATH "/usr/lib/pkgconfig" )

find_package(Torch REQUIRED)
find_package(OpenCV REQUIRED) 


add_executable(../bin/app ../sources/app.cpp)
include_directories(/home/m3/meto_ws/c_cpp_libs/libtorch/include/torch/csrc/api/include)
include_directories(../libs)
target_link_libraries(../bin/app "${TORCH_LIBRARIES}"  "${OpenCV_LIBS}")

 

set_property(TARGET ../bin/app PROPERTY CXX_STANDARD 14) 
