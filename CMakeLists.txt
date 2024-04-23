cmake_minimum_required(VERSION 3.27)
project(PPlearning)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPPlearning main.cpp
        switcher.cpp
        topics.h
        pointers1.cpp
        pointers2.cpp
        random.cpp
        funcParameters.cpp
        arrayInFunc.cpp
        varScope.cpp
        funcOverloading.cpp
        funcPrototypes.cpp
        templates.cpp
        recursion.cpp)
