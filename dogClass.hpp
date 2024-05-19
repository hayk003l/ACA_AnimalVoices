#ifndef __DOGCLASS__
#define __DOGCLASS__
#include "animalClass.hpp"

class Dog : public Animal {
    public:
    Dog();
    Dog(const int& age, const int& weight);
    ~Dog();

    void voice() override;
};


#endif // __DOGCLASS__