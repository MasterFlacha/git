cmake_minimum_required(VERSION 3.3)
project(Blum_Micali)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

set(SOURCE_FILE
        src/main.cpp
        src/Inforamtion.cpp)

add_executable(Blum_Micali ${SOURCE_FILE})