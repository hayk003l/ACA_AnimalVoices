#include <iostream>

#include "bearClass.hpp"

Bear::Bear() {}
Bear::~Bear() {}

Bear::Bear(const int& age, const int& weight) : Animal(age, weight) {}

void Bear::voice() {
    std::cout << "I am a bear" << std::endl;
}