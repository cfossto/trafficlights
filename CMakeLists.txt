cmake_minimum_required(VERSION 3.26)
project(trafficlights)

set(CMAKE_CXX_STANDARD 17)

add_executable(trafficlights main.cpp
        src/TrafficLight.cpp
        src/TrafficLight.h
)
