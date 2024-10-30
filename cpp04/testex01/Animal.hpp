/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:06:35 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/09 10:06:35 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string type;
    // Animal(std::string &type);
public:
    Animal();
    Animal(const Animal &);
    Animal &operator=(const Animal &);
    const std::string &getType(void) const;
    virtual void makeSound() const;
    virtual ~Animal();
};

#endif