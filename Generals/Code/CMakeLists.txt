cmake_minimum_required(VERSION 3.31)

project(CnC_Generals VERSION 0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(GameEngine)

add_executable(CnC_Generals test_main.cpp)
