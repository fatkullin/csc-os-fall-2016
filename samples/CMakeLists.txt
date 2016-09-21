cmake_minimum_required(VERSION 3.6)
project(samples)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

add_custom_target(samples ALL COMMAND make WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})