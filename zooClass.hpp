#ifndef __ZOOCLASS__
#define __ZOOCLASS__
#include "animalClass.hpp"

class Zoo {
    public:
    Zoo();
    Zoo(const int& size);
    ~Zoo();

    public:
    bool registerAnimal(Animal* newAnimal);
    void removeAnimal(const int& indexAnimal);
    void printVoices();
    
    private:
    int _size = 0;
    int _count = 0;
    Animal** _animalObj = nullptr;
};


#endif // __ZOOCLASS__

