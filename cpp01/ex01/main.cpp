#include "Zombie.hpp"
#include <unistd.h>

int main(int ac, char *av[])
{
    Zombie *zombie = zombieHorde(N, "zombi");
    for(int i = 0; i < N; i++)
        zombie[i].announce();
    delete [] zombie;
}