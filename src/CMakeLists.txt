add_subdirectory(math)

target_sources(voxengine PUBLIC version.cc)
target_link_libraries(voxengine PUBLIC math)