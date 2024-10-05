/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:11:03 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/04 16:04:21 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void f() { system("leaks main"); }

int main()
{
	atexit(f);

	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();
	delete j; // 
	delete i;
	return (0);
}
