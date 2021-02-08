cmake_minimum_required(VERSION 3.0)
project(test LANGUAGES C)

if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
  add_compile_options(-Wall -Wextra -pedantic -ftrack-macro-expansion=0)
endif()

include_directories(../include)

file(GLOB TESTS *.c)

foreach(TEST ${TESTS})
  get_filename_component(TEST_NAME ${TEST} NAME_WE)
  add_executable(${TEST_NAME} ${TEST})
endforeach()

foreach(TARGET ${BUILDSYSTEM_TARGETS})
  set_target_properties(TARGET PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
endforeach()
