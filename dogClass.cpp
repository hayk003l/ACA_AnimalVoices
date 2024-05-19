#include <iostream>

#include "dogClass.hpp"

Dog::Dog() {}
Dog::~Dog() {}
Dog::Dog(const int& age, const int& weight) : Animal(age, weight) {}

void Dog::voice() {
    std::cout << "I am a dog" << std::endl;
}