/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:06:52 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 16:26:42 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class AAnimal
{
protected:
    std::string type;
    // AAnimal(std::string &type);
public:
    AAnimal();
    AAnimal(const AAnimal &);
    AAnimal &operator=(const AAnimal &);
    const std::string &getType(void) const;
    virtual void makeSound() const = 0;
    virtual ~AAnimal();
};

#endif