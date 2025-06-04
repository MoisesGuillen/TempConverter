cmake_minimum_required(VERSION 3.31)
project(TempConverter)

set(CMAKE_CXX_STANDARD 23)

add_executable(TempConverter main.cpp
        getInput.cpp
        convertTemp.cpp
        getInput.h
        convertTemp.h)
