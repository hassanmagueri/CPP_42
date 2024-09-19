#include "Zombie.hpp"
#include <unistd.h>

int main()
{
    Zombie *zombie = zombieHorde(N, "zombi");
    for(int i = 0; i < N; i++)
        zombie[i].announce();
    delete [] zombie;
}