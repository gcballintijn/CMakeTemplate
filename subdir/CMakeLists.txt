add_library(something Something.cpp)
if (DO_SOMETHING_BIG)
    target_compile_definitions(something PRIVATE "DO_SOMETHING_BIG")
endif()
