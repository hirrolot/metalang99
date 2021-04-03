cmake_minimum_required(VERSION 3.16)
project(test LANGUAGES C)

if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
  add_compile_options(-Wall -Wextra -pedantic -std=c99
                      -ftrack-macro-expansion=0)
elseif(CMAKE_C_COMPILER_ID STREQUAL "MSVC")
  # Enable a standard-confirming C99/C11 preprocessor.
  add_compile_options("/std:c11")
endif()

include_directories(../include)

add_executable(choice choice.c)
add_executable(control control.c)
add_executable(either either.c)
add_executable(gen gen.c)
add_executable(lang lang.c)
add_executable(list list.c)
add_executable(logical logical.c)
add_executable(maybe maybe.c)
add_executable(nat nat.c)
add_executable(tuple tuple.c)
add_executable(util util.c)
add_executable(variadics variadics.c)

foreach(TARGET ${BUILDSYSTEM_TARGETS})
  set_target_properties(TARGET PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
endforeach()
