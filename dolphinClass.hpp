#ifndef __DOLPHINCLASS__
#define __DOLPHINCLASS__
#include "animalClass.hpp"

class Dolphin : public Animal {
    public:
    Dolphin();
    Dolphin(const int& age, const int& weight);
    ~Dolphin();

    void voice() override;
};


#endif // __DOLPHINCLASS__