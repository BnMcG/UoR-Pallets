cmake_minimum_required(VERSION 3.3)
project(AutomaticWarehouse)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp storage/pallet.cpp storage/pallet.h storage/CargoStorage.cpp storage/CargoStorage.h SimpleTruck.cpp SimpleTruck.h)
add_executable(AutomaticWarehouse ${SOURCE_FILES})