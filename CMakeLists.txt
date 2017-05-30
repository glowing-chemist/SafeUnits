cmake_minimum_required(VERSION 3.7)
project(SIunits)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES library.cpp library.h subUnit.cpp literals.cpp)
add_library(SIunits ${SOURCE_FILES})