#include <iostream>
#include "Greeter.h"

int main(){

    std::string name;
    std::cout<< "Введите имя: ";
    std::cin>> name;

    Greeter greeter;
    std::cout<< greeter.greet(name) << std::endl;

    return EXIT_SUCCESS;
}