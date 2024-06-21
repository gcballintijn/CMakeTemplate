cmake_minimum_required(VERSION 3.16)

project(CMakeTemplate
    VERSION 1.0.0
    DESCRIPTION "My CMake starter project."
    LANGUAGES CXX
)

include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_PACKAGE_VERSION_MAJOR "${CMakeTemplate_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${CMakeTemplate_VERSION_MINOR}")
set(CPACK_GENERATOR "TGZ")
set(CPACK_SOURCE_GENERATOR "TGZ")
include(CPack)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(config.hpp.in config.hpp)

add_executable(application application.cpp)
target_include_directories(application
    PUBLIC
    "${PROJECT_BINARY_DIR}"
)

install(TARGETS application DESTINATION bin)
