#ifndef __CATCLASS__
#define __CATCLASS__
#include "animalClass.hpp"

class Cat : public Animal {
    public:
    Cat();
    ~Cat();

    void voice() override;
};


#endif // __CATCLASS__