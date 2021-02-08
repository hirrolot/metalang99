cmake_minimum_required(VERSION 3.0)
project(test LANGUAGES C)

if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
  add_compile_options(-Wall -Wextra -ftrack-macro-expansion=0)
endif()

include_directories(../include)

file(GLOB HEADERS *.h)
add_executable(test main.c ${HEADERS})
set_target_properties(test PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
