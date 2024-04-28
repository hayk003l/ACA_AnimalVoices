#include <iostream>

#include "dogClass.hpp"

Dog::Dog() {}
Dog::~Dog() {}

void Dog::voice() {
    std::cout << "I am a dog" << std::endl;
}