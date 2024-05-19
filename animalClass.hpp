#ifndef __ANIMALCLASS__
#define __ANIMALCLASS__

class Animal {
public:
    Animal();
    Animal(const int& age, const int& weigh);
    Animal(Animal&& obj);
    Animal& operator=(Animal&& obj);
    virtual ~Animal();

    bool operator>(const Animal& obj);
    bool operator<(const Animal& obj);
    bool operator==(const Animal& obj);

    Animal(const Animal& obj);
    Animal& operator=(const Animal& obj);

    int getWeight() const;
    int getAge() const; 
    virtual void voice() = 0;
    static int getCount();
private:
    static int _count;
    int _age = 0;
    int* _weight = nullptr;
};


#endif // __ANIMALCLASS__