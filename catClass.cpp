#include <iostream>

#include "catClass.hpp"

Cat::Cat() {}
Cat::~Cat() {}
Cat::Cat(const int& age, const int& weight) : Animal(age, weight) {}

void Cat::voice() {
    std::cout << "I am a cat" << std::endl;
}