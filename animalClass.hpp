#ifndef __ANIMALCLASS__
#define __ANIMALCLASS__

class Animal {
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal& obj);

    virtual void voice() = 0;
    static int getCount();
private:
    static int count;
};


#endif // __ANIMALCLASS__