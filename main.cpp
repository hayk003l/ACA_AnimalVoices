#include <iostream>

#include "allIncludes.hpp"

int main() {
    
    size_t size = 0;

    std::cout << "Enter the size of zoo." << std::endl;
    std::cin >> size;

    Animal* dogObj = new Dog;
    Animal* catObj = new Cat;
    Animal* lionObj = new Lion;
    Animal* dolphinObj = new Dolphin;
    Animal* bearObj = new Bear;

    Zoo* zooObj = new Zoo(size);

    if(!zooObj->registerAnimal(dogObj)) {
        return -1;
    }
    if(!zooObj->registerAnimal(catObj)) {
        return -1;
    }
    if(!zooObj->registerAnimal(lionObj)) {
        return -1;
    }
    if(!zooObj->registerAnimal(dolphinObj)) {
        return -1;
    }
    if(!zooObj->registerAnimal(bearObj)) {
        return -1;
    }

    zooObj->printVoices();

    delete zooObj;
    zooObj = nullptr;

    return 0;
}