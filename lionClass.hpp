#ifndef __LIONCLASS__
#define __LIONCLASS__
#include "animalClass.hpp"

class Lion : public Animal {
    public:
    Lion();
    ~Lion();

    void voice() override;
};


#endif // __LIONCLASS__