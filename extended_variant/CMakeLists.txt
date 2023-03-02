# CMakeList.txt : CMake project for extended_variant, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (extended_variant "main.cpp" "values_description.cpp" "utility.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET extended_variant PROPERTY CXX_STANDARD 20)
endif()

target_include_directories(extended_variant PUBLIC ${CMAKE_SOURCE_DIR})

# TODO: Add tests and install targets if needed.
