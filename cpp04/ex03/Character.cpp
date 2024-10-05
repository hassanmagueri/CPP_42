/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:35:46 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/05 20:28:50 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::printMateriaSlots(void)
{
    for(int i = 0; i < 4; i++)
    {
        if (materiaSlots[i] == NULL)
            std::cout << "array["<< i << "] : (null)" << std::endl;
        else
            std::cout << "array["<< i << "] : " <<  materiaSlots[i]->getType() << std::endl;
    }
}

Character::Character()
{
    for (int i = 0; i < NUM_SLOTS; i++)
        materiaSlots[i] = NULL;
    std::cout << "Character Created" << std::endl;
}

Character::Character(std::string const &name)
{
    for (int i = 0; i < NUM_SLOTS; i++)
        materiaSlots[i] = NULL;
    this->name = name;
    std::cout << "Character Created" << std::endl;
}

Character::Character(const Character &other)
{
    std::cout << "Character Created" << std::endl;
    *this = other;
}

std::string const& Character::getName() const
{
    return this->name;
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        this->name = other.name;
        for(int i = 0; i < NUM_SLOTS; i++)
            this->materiaSlots[i] = other.materiaSlots[i];
    }
    return *this;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < NUM_SLOTS; i++)
        if (materiaSlots[i] == NULL)
        {
            materiaSlots[i] = m;
            break;
        }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        materiaSlots[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4)
    {
        //expected segfault 
        if (materiaSlots[idx])
            materiaSlots[idx]->use(target);
    }
}

Character::~Character()
{
	for (int i = 0; i < NUM_SLOTS; i++)
		delete materiaSlots[i];
    std::cout << "Character Destroyed" << std::endl;
}