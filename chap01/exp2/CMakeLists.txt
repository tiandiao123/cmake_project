cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(recipe-01 LANGUAGES CXX)

add_library(message 
  STATIC
    Message.hpp
    Message.cpp
  )


add_executable(hello-world hello-world.cpp) 
target_link_libraries(hello-world message)
