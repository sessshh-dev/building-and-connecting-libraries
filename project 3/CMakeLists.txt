cmake_minimum_required(VERSION 3.10)
project(LeaverProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(leaver SHARED src/Leaver.cpp)

add_executable(main main.cpp)

target_link_libraries(main leaver)