add_library(something Something.cpp)

if (DO_SOMETHING_BIG)
    target_compile_definitions(something
        PRIVATE
        "DO_SOMETHING_BIG"
    )
endif()

target_include_directories(something
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(something
    PUBLIC
    compiler_flags
)
