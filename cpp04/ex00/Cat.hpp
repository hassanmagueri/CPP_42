/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:13:42 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 20:12:27 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
protected:
    // Animal(std::string &type);
public:
    Cat();
    Cat(const Cat &);
    Cat &operator=(const Cat &);
    ~Cat();
    // const std::string &getType(void);
    void makeSound() const;
};

#endif