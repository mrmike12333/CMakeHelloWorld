cmake_minimum_required(VERSION 3.22)

add_library(
    ExampleLib
    LibraryFile.cpp
    )

target_include_directories(
    ExampleLib
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
    )

    target_link_libraries(
        ExampleLib
        PUBLIC
        compiler_flags
    )