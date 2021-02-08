cmake_minimum_required(VERSION 3.0)
project(examples LANGUAGES C)

if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
  add_compile_options(-Wall -Wextra -ftrack-macro-expansion=0)
endif()

include_directories(../include)

file(GLOB EXAMPLES *.c)

foreach(EXAMPLE ${EXAMPLES})
  get_filename_component(EXAMPLE_NAME ${EXAMPLE} NAME_WE)
  add_executable(${EXAMPLE_NAME} ${EXAMPLE})
endforeach()

foreach(TARGET ${BUILDSYSTEM_TARGETS})
  set_target_properties(TARGET PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
endforeach()
