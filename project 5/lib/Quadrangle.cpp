#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
    : Shape("Четырёхугольник", 4),
      a{a}, b{b}, c{c}, d{d}, A{A}, B{B}, C{C}, D{D} {}

bool Quadrangle::check() const {
    return A + B + C + D == 360;
}

void Quadrangle::print_info() const {
    Shape::print_info();
    std::cout << "Стороны: a=" << a << " b=" << b
              << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B
              << " C=" << C << " D=" << D << std::endl;
    std::cout << std::endl;
}
