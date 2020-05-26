cmake_minimum_required(VERSION 3.5)

project(client LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(libshared_binary_dir "BUILD_DIR")
set(libshared_source_dir "SOURCE_DIR")

add_executable(${PROJECT_NAME} main.cpp)

add_library(shared_lib SHARED IMPORTED)
set_property(TARGET shared_lib PROPERTY IMPORTED_LOCATION ${libshared_binary_dir}/libshared_lib.so)

target_include_directories(${PROJECT_NAME} PRIVATE ${libshared_source_dir})
target_link_libraries(${PROJECT_NAME} PRIVATE shared_lib)
