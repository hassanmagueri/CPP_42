/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:49:03 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 20:12:51 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
    // Animal(std::string &type);
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &);
    WrongAnimal &operator=(const WrongAnimal &);
    const std::string &getType(void) const;
    void makeSound() const;
    virtual ~WrongAnimal();
};

#endif