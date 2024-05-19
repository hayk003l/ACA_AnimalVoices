#include <iostream>

#include "dolphinClass.hpp"

Dolphin::Dolphin() {}
Dolphin::~Dolphin() {}
Dolphin::Dolphin(const int& age, const int& weight) : Animal(age, weight) {}

void Dolphin::voice() {
    std::cout << "I am a dolphin" << std::endl;
}