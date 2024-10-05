/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:56:30 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/05 14:42:06 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "Character.hpp"
class ICharacter;
class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &other); 
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual ~AMateria();
	virtual void use(ICharacter& target) = 0;
	
};

#endif

// *******done*******
// create AMaterial class and *******done*******
// Ice and cure classes *******done*******
// make them as a derived class from the previous abstract class *******done*******
// implement the pure virtual functions  *******done*******
// and then the ICharacter interface to use() function