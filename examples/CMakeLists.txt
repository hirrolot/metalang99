cmake_minimum_required(VERSION 3.0)
project(examples LANGUAGES C)

if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
  add_compile_options(-Wall -Wextra -ftrack-macro-expansion=0)
endif()

include_directories(../include)

add_executable(demo demo.c)
add_executable(overload overload.c)

add_executable(factorial factorial.c)
add_executable(ackermann ackermann.c)

add_executable(binary_tree binary_tree.c)
add_executable(rectangle rectangle.c)

foreach(TARGET ${BUILDSYSTEM_TARGETS})
  set_target_properties(TARGET PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
endforeach()
