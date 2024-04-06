cmake_minimum_required(VERSION 3.22)

# Interface library to define C++ info.
# Linking to this library will include these requirements.
add_library(compiler_flags INTERFACE)
target_compile_features(compiler_flags INTERFACE cxx_std_17)

project(
    HelloWorld 
    VERSION 0.1
    DESCRIPTION "A simple Hello world program."
    )

configure_file(HelloWorldConfig.h.in HelloWorldConfig.h)

add_executable(HelloWorld Source/main.cpp)

add_subdirectory(ExampleLib)

target_link_libraries(
    HelloWorld
    PUBLIC
    ExampleLib
    compiler_flags
    )

target_include_directories(
    HelloWorld PUBLIC 
    ${PROJECT_BINARY_DIR}
    )