#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    announce();
}

Zombie::Zombie() { }

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << this->name + ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    std::cout << this->name << std::endl;
}
