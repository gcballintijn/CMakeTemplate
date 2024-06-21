cmake_minimum_required(VERSION 3.16)

project(CMakeTemplate
    VERSION 1.0.0
    DESCRIPTION "My CMake starter project."
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(config.hpp.in config.hpp)

add_executable(application application.cpp)
target_include_directories(application
    PUBLIC
    "${PROJECT_BINARY_DIR}"
)
