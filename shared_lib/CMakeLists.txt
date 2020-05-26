cmake_minimum_required(VERSION 3.5)

project(shared_lib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES lib.cpp)
set(HEADERS lib.h)

add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})
