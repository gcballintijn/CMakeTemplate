//
// application.cpp -- CMakeTemplate
//

#include <cstdlib>
#include <iostream>

#include "config.hpp"


int
main(int, const char **)
{
    std::cout << "Application template" 
            << " (" << cmake_template_version << ")"
            << std::endl;
    std::cout << "major: " << cmake_template_major
            << " minor: " << cmake_template_minor
            << " patch: " << cmake_template_patch
            << std::endl;

    return EXIT_SUCCESS;
}
