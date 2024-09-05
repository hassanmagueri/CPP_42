#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    announce();
}

void Zombie::announce(void)
{
    std::cout << this->name + ": BraiiiiiiinnnzzzZ...\n";
}
