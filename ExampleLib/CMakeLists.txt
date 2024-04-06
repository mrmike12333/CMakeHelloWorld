cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(
    ExampleLib
    LibraryFile.cpp
    )

target_include_directories(
    ExampleLib
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
    )