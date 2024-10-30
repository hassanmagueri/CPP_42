/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:35:46 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/11 09:55:24 by emagueri         ###   ########.fr       */
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
	std::cout << "\033[90mCharacter Created!\033[0m" << std::endl;
}

Character::Character(std::string const &name)
{
	for (int i = 0; i < NUM_SLOTS; i++)
		materiaSlots[i] = NULL;
	this->name = name;
	std::cout << "\033[90mCharacter Created!\033[0m" << std::endl;
}

Character::Character(const Character &other)
{
	std::cout << "\033[90mCharacter Created!\033[0m" << std::endl;
	*this = other;
}

std::string const& Character::getName() const
{
	return this->name;
}

Character &Character::operator=(const Character &other)
{
	// loop delete old materias

	if (this != &other)
	{
		for (int i = 0; i < NUM_SLOTS; i++)
		{
			delete this->materiaSlots[i];
			this->materiaSlots[i] = NULL;
		}
		this->name = other.name;
		for(int i = 0; i < NUM_SLOTS; i++)
			if (this->materiaSlots[i])
				this->materiaSlots[i] = other.materiaSlots[i]->clone(); // PROB
			else
				this->materiaSlots[i] = NULL;
	}
	return *this;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < NUM_SLOTS; i++)
		if (materiaSlots[i] == NULL)
		{
			materiaSlots[i] = m;
			return ;
		}
	delete m;
		
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
		if (materiaSlots[idx])
			materiaSlots[idx]->use(target);
	}
}

Character::~Character()
{
	for (int i = 0; i < NUM_SLOTS; i++)
		delete materiaSlots[i];
	std::cout << "\033[90mCharacter Destroyed!\033[0m" << std::endl;
}