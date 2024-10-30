/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:13:42 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/09 09:54:47 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
protected:
    // Animal(std::string &type);
public:
    WrongCat();
    WrongCat(const WrongCat &);
    WrongCat &operator=(const WrongCat &);
    // const std::string &getType(void);
    void makeSound() const;
    ~WrongCat();
};

#endif