#ifndef __DOGCLASS__
#define __DOGCLASS__
#include "animalClass.hpp"

class Dog : public Animal {
    public:
    Dog();
    ~Dog();

    void voice() override;
};


#endif // __DOGCLASS__