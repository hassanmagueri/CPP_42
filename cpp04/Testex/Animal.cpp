/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 11:00:44 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "\033[90mAnimal Created\033[0m" << std::endl;
    a = 10000;
    // type = "Animal";
}

Animal::Animal(const Animal &other)
// Animal::Animal(v_table *vt, const Animal &other)
{
    // vt = Animal::vtable
    std::cout << "\033[90mAnimal Created (DCC)\033[0m" << std::endl;
    a = other.a;
    *this = other;
}

// const std::string &Animal::getType() const
// {
//     return type;
// }

Animal &Animal::operator=(const Animal &other)
{
    // if (this != &other)
    //     this->type = other.type;
    
    return *this;
}
void Animal::makeSound() const
{
    std::cout << "Animal sound!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "\033[90mAnimal Destroyed\033[0m" << std::endl;
}