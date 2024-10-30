#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
public:
    int a;
    Animal();
    Animal(const Animal &);
    Animal &operator=(const Animal &);
    // const std::string &getType(void) const;
    virtual void makeSound() const;
    ~Animal();
};

#endif