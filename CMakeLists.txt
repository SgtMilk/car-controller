cmake_minimum_required(VERSION 3.21)
project(car_controller)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS -lpigpio)

include_directories(car_controller PUBLIC "include/")
include_directories(car_controller PRIVATE "src/")

set(SOURCES src/main.cpp) # add .cpp files here

add_executable(car_controller ${SOURCES})