#include "animalClass.hpp"

Animal::Animal() {
    _count++;
}

Animal::Animal(const int& age, const int& weight) : _age(age) {
    _weight = new int(weight);
    _count++;
}

Animal::~Animal() {
    delete _weight;
    _weight = nullptr;
    --_count;
}

Animal::Animal(const Animal& obj) {
    this->_weight = obj._weight;
    this->_age = obj._age;
    _count++;
}

Animal& Animal::operator=(const Animal& obj) {
    if(this != &obj) {
        this->_weight = obj._weight;
        this->_age = obj._age;
    }
    return *this;
}

Animal::Animal(Animal&& obj) {
    this->_weight = obj._weight;
    this->_age = obj._age;
    _count++;

    obj._weight = nullptr;
    obj._age = 0;
}

Animal& Animal::operator=(Animal&& obj) {
    if(this != &obj) {
        this->_weight = obj._weight;
        this->_age = obj._age;

        obj._weight = nullptr;
        obj._age = 0;
    }
    return *this;
}

int Animal::getCount() {
    return _count;
}

bool Animal::operator<(const Animal& obj) {
    return this->_age < obj._age;
}

bool Animal::operator>(const Animal& obj) {
    return this->_age > obj._age;
}

bool Animal::operator==(const Animal& obj) {
    return this->_age == obj._age;
}

int Animal::getAge() const {
    return _age;
}

int Animal::getWeight() const {
    return *_weight;
}

int Animal::_count = 0;