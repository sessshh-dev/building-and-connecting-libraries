#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape {
protected:
    std::string name;
    int sides_count{};

public:
    Shape(std::string name, int sides_count);

    virtual bool check() const;
    virtual void print_info() const;

    virtual ~Shape() = default;
};

#endif