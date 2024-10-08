/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:19:17 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/08 12:04:57 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Created" << std::endl;
	for (int i = 0; i < NUM_SLOTS; i++)
		materiaSlots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for(int i = 0; i < NUM_SLOTS; i++)
			this->materiaSlots[i] = other.materiaSlots[i];
	}
	return *this;
}

void MateriaSource::printMateriaSlots(void)
{
    for(int i = 0; i < 4; i++)
    {
        if (materiaSlots[i] == NULL)
            std::cout << "array["<< i << "] : (null)" << std::endl;
        else
            std::cout << "array["<< i << "] : " <<  materiaSlots[i]->getType() << std::endl;
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < NUM_SLOTS; i++)
	{
        if (materiaSlots[i] == NULL)
        {
            materiaSlots[i] = m;
            break;
        }
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < NUM_SLOTS; i++)
		if (materiaSlots[i] && materiaSlots[i]->getType() == type)
			return materiaSlots[i]->clone();
	return NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < NUM_SLOTS; i++)
		delete materiaSlots[i];
	std::cout << "MateriaSource Destroyed" << std::endl;
}
