#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        HumanB(std::string name)
                {this->name = name;}

        void    setWeapon(Weapon &weapon)
                    {this->weapon = &weapon;}
        void    attack(void);
};

#endif