# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("variant_benchmark")

add_compile_options(
    "$<$<CONFIG:RELEASE>:/Od>"
    "$<$<CONFIG:DEBUG>:/Od>"
)

# Include sub-projects.
add_subdirectory ("variant")
add_subdirectory ("extended_variant")
add_subdirectory ("move_vs_copy")
