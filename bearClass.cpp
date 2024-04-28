#include <iostream>

#include "bearClass.hpp"

Bear::Bear() {}
Bear::~Bear() {}

void Bear::voice() {
    std::cout << "I am a bear" << std::endl;
}