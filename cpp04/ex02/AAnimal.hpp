#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class AAnimal
{
protected:
    std::string type;
    // AAnimal(std::string &type);
public:
    AAnimal();
    AAnimal(const AAnimal &);
    AAnimal &operator=(const AAnimal &);
    const std::string &getType(void) const;
    virtual void makeSound() const = 0;
    virtual ~AAnimal();
};

#endif