/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:35:51 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/05 18:08:45 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#define NUM_SLOTS 4
#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
    virtual void printMateriaSlots(void) = 0;
};
// problem


class Character: public ICharacter
{
private:
    std::string name;
    AMateria *materiaSlots[NUM_SLOTS];
public:
    Character();
    Character(std::string const &name);
    Character &operator=(const Character &other);
    Character(Character const &other);
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    void printMateriaSlots(void);
    ~Character();
};

#endif