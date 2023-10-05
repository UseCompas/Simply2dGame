cmake_minimum_required(VERSION 3.26)
project(Simply2dGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(Simply2dGame main.cpp
        Game.cpp
        Game.h
        Entity.cpp
        Entity.h
        Field.cpp
        Field.h
        Point.cpp
        Point.h
)
