#include <iostream>

#include "zooClass.hpp"

Zoo::Zoo() {}

Zoo::Zoo(const int& size) : _size(size) {
    _animalObj = new Animal*[_size];
    for (int i = 0; i < _size; ++i) {
        _animalObj[i] = nullptr;
    }
}

Zoo::~Zoo() {
    for (int i = 0; i < _count; ++i) {
        delete _animalObj[i];
        _animalObj[i] == nullptr;
    }
    delete[] _animalObj;
    _animalObj = nullptr;
}

bool Zoo::registerAnimal(Animal* newAnimal) {
    bool result = false;
    if (_count <= _size) {
        result = true;
        _animalObj[_count] = newAnimal;
        _count++;
    }
    
    return result;
}

void Zoo::removeAnimal(const int& indexAnimal) {
    for (int i = indexAnimal; i < _count - 1; ++i) {
        _animalObj[i + 1] = _animalObj[i];
    }
    _count--;
}

void Zoo::printVoices() {
    for (int i = 0; i < _count; ++i) {
        _animalObj[i]->voice();
    }
}