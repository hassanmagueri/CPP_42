#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string type;
    // Animal(std::string &type);
public:
    Animal();
    Animal(const Animal &);
    Animal &operator=(const Animal &);
    const std::string &getType(void) const;
    virtual void makeSound() const;
    // ***** ***** ***** *****
    void fun() {std::cout << "I am Animal\n";}
    // ***** ***** ***** *****
    virtual ~Animal();
};

#endif