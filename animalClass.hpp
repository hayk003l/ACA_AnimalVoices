#ifndef __ANIMALCLASS__
#define __ANIMALCLASS__

class Animal {
    
    public:
    Animal();
    virtual ~Animal();

    virtual void voice() = 0;

};


#endif // __ANIMALCLASS__