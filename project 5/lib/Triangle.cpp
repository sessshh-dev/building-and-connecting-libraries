#include "Triangle.h"
#include <iostream>

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
    : Shape("Треугольник", 3), a{a}, b{b}, c{c}, A{A}, B{B}, C{C} {}

bool Triangle::check() const {
    return (A + B + C == 180);
}

void Triangle::print_info() const {
    Shape::print_info();
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    std::cout << std::endl;
}
