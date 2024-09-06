#include "Zombie.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
	randomChump("hassane");
	Zombie *z = newZombie("brahim");
	delete z;
	return 0;
}
