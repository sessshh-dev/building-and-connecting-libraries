#include "Shape.h"
#include <iostream>

Shape::Shape(std::string name, int sides_count)
    : name{name}, sides_count{sides_count} {}

bool Shape::check() const {
    return sides_count == 0;
}

void Shape::print_info() const {
    std::cout << name << std::endl;
    std::cout << (check() ? "Правильная\n" : "Неправильная\n");
    std::cout << "Количество сторон: " << sides_count << std::endl;
}
