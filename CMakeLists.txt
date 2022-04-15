cmake_minimum_required(VERSION 3.14)

project(Algorithms)

add_library(algorithmLib STATIC LibraryCode.cpp)
add_executable(mainApp main.cpp)

target_link_libraries(mainApp algorithmLib)