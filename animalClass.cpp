#include "animalClass.hpp"

Animal::Animal() {
    count++;
}
Animal::~Animal() {
    --count;
}
Animal::Animal(const Animal& obj) {
    count++;
}

int Animal::getCount() {
    return count;
}

int Animal::count = 0;