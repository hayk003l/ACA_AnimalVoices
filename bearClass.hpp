#ifndef __BEARCLASS__
#define __BEARCLASS__
#include "animalClass.hpp"

class Bear : public Animal {
    public:
    Bear();
    Bear(const int& age, const int& weight);
    
    ~Bear();

    void voice() override;
};


#endif // __BEARCLASS__