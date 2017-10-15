cmake_minimum_required(VERSION 3.8)
project(lec1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Book.h Book.cpp Library.h Library.cpp)
add_executable(lec1 ${SOURCE_FILES})