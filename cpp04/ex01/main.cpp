/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:11:03 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 18:26:48 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#define N 10
void f() { system("leaks main"); }

int main()
{
	atexit(f);

	const Animal *Animals[N];
	for (size_t i = 0; i < N / 2; i++)
		Animals[i] = new Dog();
	for (size_t i = N / 2; i < N; i++)
		Animals[i] = new Cat();
	for (size_t i = 0; i < N; i++)
		delete Animals[i];
		
	
	Brain b = Brain();
	
	b.ideas[0] = "first";
	b.ideas[1] = "two";
	b.ideas[2] = "tree";
	
	
	Dog d = Dog();
	d.setBrain(b);
	
	std::cout << d.getBrain()->ideas[0] << std::endl;
	std::cout << d.getBrain()->ideas[1] << std::endl;
	std::cout << d.getBrain()->ideas[2] << std::endl;
	std::cout << d.getBrain()->ideas[3] << std::endl;
	
	
	b.ideas[3] = "fore";
	std::cout << d.getBrain()->ideas[3] << std::endl;
	
	Dog basic;
	{
		Dog tmp = basic;
	}
	
	basic.makeSound();
	return (0);
}
