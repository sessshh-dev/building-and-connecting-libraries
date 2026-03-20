cmake_minimum_required(VERSION 3.10)
project(ShapesDLL)

set(CMAKE_CXX_STANDARD 17)

add_library(shapes SHARED
    lib/Shape.cpp
    lib/Triangle.cpp
    lib/RightTriangle.cpp
    lib/IsoscelesTriangle.cpp
    lib/EquilateralTriangle.cpp
    lib/Quadrangle.cpp
    lib/Rectangle.cpp
    lib/Square.cpp
    lib/Parallelogram.cpp
    lib/Rhombus.cpp
)

target_include_directories(shapes PUBLIC lib)

add_executable(app app/main.cpp)

target_link_libraries(app shapes)