cmake_minimum_required(VERSION 3.5)

project(dynamic_client LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(libshared_binary_dir "BUILD_DIR")
set(libshared_source_dir "SOURCE_DIR")

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${libshared_source_dir})
