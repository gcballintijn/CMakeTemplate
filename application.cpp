//
// application.cpp -- CMakeTemplate
//

#include <cstdlib>
#include <iostream>

#include "config.hpp"
#include "Something.hpp" 


int
main(int, const char **)
{
    std::cout << "Application template" 
            << " (" << Config::cmake_template_version << ")"
            << std::endl;
    std::cout << "major: " << Config::cmake_template_major
            << " minor: " << Config::cmake_template_minor
            << " patch: " << Config::cmake_template_patch
            << std::endl;

    Something::do_something();

    return EXIT_SUCCESS;
}
