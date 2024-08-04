cmake_minimum_required(VERSION 3.25)
project(voxengine VERSION 1.0.0 LANGUAGES CXX)

include_directories(include src)

add_library(voxengine SHARED)
target_compile_options(voxengine PUBLIC -Wall -Werror -Wextra -Wold-style-cast -pedantic)
target_link_libraries(voxengine PUBLIC math SDL3::SDL3-shared)

add_subdirectory(lib)
add_subdirectory(src)