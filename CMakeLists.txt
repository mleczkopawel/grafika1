cmake_minimum_required(VERSION 3.8)
project(grafika1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS -lGL)
set(CMAKE_CXX_FLAGS -lGLU)
set(CMAKE_CXX_FLAGS -lglut)
set(SOURCE_FILES main.cpp Okno.h Okno.cpp)
add_executable(grafika1 ${SOURCE_FILES})