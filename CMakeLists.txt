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

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(config.hpp.in config.hpp)

add_subdirectory(subdir)

add_executable(application application.cpp)
target_compile_options(application
    PRIVATE
    -Wall
    -Wextra
    -pedantic
)
target_include_directories(application
    PRIVATE
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/subdir"
)
target_link_libraries(application
    PRIVATE
    something
)

install(TARGETS application DESTINATION bin)
