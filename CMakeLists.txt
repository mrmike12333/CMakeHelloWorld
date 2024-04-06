cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(
    HelloWorld 
    VERSION 0.1
    DESCRIPTION "A simple Hello world program."
    )

configure_file(HelloWorldConfig.h.in HelloWorldConfig.h)

add_executable(HelloWorld Source/main.cpp)

target_include_directories(
    HelloWorld 
    PUBLIC 
    ${PROJECT_BINARY_DIR}
    )