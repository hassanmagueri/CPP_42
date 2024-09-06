#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(){};
		Weapon(std::string type);
		const std::string	&getType(void)
								{return (this->type);}
		void				setType(std::string type)
								{this->type = type;}
};
#endif