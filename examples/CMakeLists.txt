cmake_minimum_required(VERSION 3.0)
project(examples LANGUAGES C)

include_directories(../include)

add_executable(binary_tree binary_tree.c)
add_executable(rectangle rectangle.c)

add_executable(factorial factorial.c)
add_executable(ackermann ackermann.c)

foreach(TARGET ${BUILDSYSTEM_TARGETS})
  set_target_properties(TARGET PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
endforeach()
