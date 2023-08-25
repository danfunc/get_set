cmake_minimum_required(VERSION 3.27)
project(get_set CXX)
add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE interface)