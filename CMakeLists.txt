cmake_minimum_required(VERSION 3.16)

project(CMakeTemplate
    VERSION 1.0.0
    DESCRIPTION "My CMake starter project."
    LANGUAGES CXX
)

option(DO_SOMETHING_BIG "Do something big!" OFF)

include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_PACKAGE_VERSION_MAJOR "${CMakeTemplate_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${CMakeTemplate_VERSION_MINOR}")
set(CPACK_GENERATOR "TGZ")
set(CPACK_SOURCE_GENERATOR "TGZ")
include(CPack)

configure_file(config.hpp.in config.hpp)

add_subdirectory(subdir)

add_executable(application application.cpp)

add_library(compiler_flags INTERFACE)
target_compile_features(compiler_flags
    INTERFACE
    cxx_std_20
)

target_compile_options(application
    PRIVATE
    -Wall
    -Wextra
    -pedantic
)

target_include_directories(application
    PRIVATE
    "${PROJECT_BINARY_DIR}"
)

target_link_libraries(application
    PRIVATE
    something
    compiler_flags
)

install(TARGETS application DESTINATION bin)
