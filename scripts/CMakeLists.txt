cmake_minimum_required(VERSION 3.0)
project(scripts LANGUAGES C)

include_directories(../include)

add_executable(gen_rec gen_rec.c)
target_link_libraries(gen_rec m)
