/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:02:12 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/05 20:00:27 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
    virtual void printMateriaSlots(void) = 0;
};

class MateriaSource : public IMateriaSource
{
private:
    AMateria *materiaSlots[NUM_SLOTS];

public:
    MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource &operator=(const MateriaSource &other);
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
    ~MateriaSource();
    void printMateriaSlots(void);
};

#endif