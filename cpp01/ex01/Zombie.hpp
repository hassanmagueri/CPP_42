#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__
# include <iostream>
# define N 10

class Zombie{
	private:
		std::string name;
	public:
					Zombie();
					Zombie(std::string name);
		void		announce(void);
		void		setName(std::string name);
		~Zombie();
};

Zombie* zombieHorde( int n, std::string name );

#endif