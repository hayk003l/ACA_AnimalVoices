#include <iostream>

#include "catClass.hpp"

Cat::Cat() {}
Cat::~Cat() {}

void Cat::voice() {
    std::cout << "I am a cat" << std::endl;
}