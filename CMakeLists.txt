cmake_minimum_required(VERSION 3.6)
project(Learning_OpenCV_3)

set(CMAKE_CXX_STANDARD 11)

find_package( OpenCV REQUIRED )
find_package( OpenGL )

if(OPENGL_FOUND)
    include_directories( ${OpenCV_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIRS} )
else()
    include_directories( ${OpenCV_INCLUDE_DIRS} )
endif()

#set(SOURCE_FILES
#    README.md)

#add_executable(Learning_OpenCV_3 ${SOURCE_FILES})

add_executable(example_02_01 example_02_01.cpp)

target_link_libraries(example_02_01 ${OpenCV_LIBS})