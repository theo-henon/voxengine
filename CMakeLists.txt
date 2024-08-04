cmake_minimum_required(VERSION 3.25)
project(voxengine VERSION 1.0.0 LANGUAGES CXX)

include_directories(include src)
add_compile_options(-Wall -Werror -Wextra -Wold-style-cast -pedantic)

add_library(voxengine SHARED)

add_subdirectory(src)