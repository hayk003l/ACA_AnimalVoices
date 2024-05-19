#include <iostream>

#include "lionClass.hpp"

Lion::Lion() {}
Lion::~Lion() {}
Lion::Lion(const int& age, const int& weight) : Animal(age, weight) {}

void Lion::voice() {
    std::cout << "I am a lion" << std::endl;
}