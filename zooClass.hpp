#ifndef __ZOOCLASS__
#define __ZOOCLASS__
#include "animalClass.hpp"

class Zoo {
    public:

    Zoo(const Zoo& obj) = delete;
    Zoo& operator=(const Zoo& obj) = delete;
    static Zoo& getInstance();

    public:
    bool registerAnimal(Animal* newAnimal);
    void removeAnimal(const int& indexAnimal);
    void printVoices();
    
    

    private:
    Zoo();
    Zoo(const int& size);
    ~Zoo();
    
    static Zoo* _instance;

    int _size = 0;
    int _count = 0;
    Animal** _animalObj = nullptr;
};

Zoo* Zoo::_instance = nullptr;


#endif // __ZOOCLASS__

