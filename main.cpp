#include <iostream>

#include "allIncludes.hpp"

int main() {
    
    size_t size = 0;
    Animal* bear = new Bear(10, 150);
    Animal* lion = new Lion(10, 10);
    Animal* dolphin = new Dolphin(6, 150);

        std::cout << bear->getWeight() << std::endl;
        std::cout << lion->getWeight() << std::endl;
        std::cout << dolphin->getWeight() << std::endl;

        if (bear < lion) {
            std::cout << "flag" << std::endl;
        }
    // std::cout << "Enter the size of zoo." << std::endl;
    // std::cin >> size;

    // Animal* dogObj = new Dog;
    // Animal* catObj = new Cat;
    // Animal* lionObj = new Lion;
    // Animal* dolphinObj = new Dolphin;
    // Animal* bearObj = new Bear;

    

    // Zoo* zooObj = new Zoo(size);

    // if(!zooObj->registerAnimal(dogObj)) {
    //     return -1;
    // }
    // if(!zooObj->registerAnimal(catObj)) {
    //     return -1;
    // }
    // if(!zooObj->registerAnimal(lionObj)) {
    //     return -1;
    // }
    // if(!zooObj->registerAnimal(dolphinObj)) {
    //     return -1;
    // }
    // if(!zooObj->registerAnimal(bearObj)) {
    //     return -1;
    // }

    // zooObj->printVoices();

    // delete zooObj;
    // zooObj = nullptr;

    // std::cout << "Count of made Animal objects - " << bearObj->getCount() << std::endl;

    
    // if(bear > lion) {
    //     std::cout << "Bear fatter than Lion" << std::endl;
    // }
    // else if (bear == lion) {
    //     std::cout << "Bear and Lion have the same weight" << std::endl;
    // }
    // else {
    //     std::cout << "Bear thinner than Lion" << std::endl;
    // }

    // if(lion > dolphin) {
    //     std::cout << "Lion fatter than Dolphin" << std::endl;
    // }
    // else if (dolphin == lion) {
    //     std::cout << "Dolphin and Lion have the same weight" << std::endl;
    // }
    // else if (lion < dolphin) {
    //     std::cout << "Lion thinner than Dolphin" << std::endl;
    // }  

    // if(dolphin < bear) {
    //     std::cout << "Bear fatter than Dolphin" << std::endl;
    // }
    // else if (bear == lion) {
    //     std::cout << "Dolphin and Bear have the same weight" << std::endl;
    // }
    // else {
    //     std::cout << "Bear thinner than Dolphin" << std::endl;
    // }  



    return 0;
    
}