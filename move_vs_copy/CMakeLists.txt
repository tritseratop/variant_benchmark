# CMakeList.txt : CMake project for extended_variant, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (move_vs_copy "main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET move_vs_copy PROPERTY CXX_STANDARD 17)
endif()

target_include_directories(move_vs_copy PUBLIC ${CMAKE_SOURCE_DIR})

# TODO: Add tests and install targets if needed.
