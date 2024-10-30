/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:11:03 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/09 13:28:40 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void f() { system("leaks main"); }

int main()
{
	Cat cat;
    Animal& cat1 = cat;  // Reference avoids slicing
    cat1.makeSound();    // Outputs "Meow", as expected
}
