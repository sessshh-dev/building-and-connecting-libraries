#include "Square.h"

Square::Square(int a)
    : Rectangle(a, a) {
    name = "Квадрат";
}

bool Square::check() const {
    return Rectangle::check() && a == b;
}
