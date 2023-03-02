# CMakeList.txt : CMake project for variant_benchmark, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (variant_benchmark "main.cpp" "values_description.h" "values_description.cpp" "utility.h" "utility.cpp" "constant.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET variant_benchmark PROPERTY CXX_STANDARD 20)
endif()

target_include_directories(variant_benchmark PUBLIC ${CMAKE_SOURCE_DIR})

# TODO: Add tests and install targets if needed.
