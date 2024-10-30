/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:06:21 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/18 18:47:16 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#define N 3


void	display(const Animal **animals, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << "I am " << animals[i]->getType() << ": ";
		animals[i]->makeSound();
	}
}

void f(){ system("leaks main");}

int main()
{
	// atexit(f);
	// const Animal *meta = new Animal();
	// const Animal *dog = new Dog();
	// const Animal *cat = new Cat();

	// const Animal *an[N] = {meta, dog, cat};
	
	// display(an, N);
	
	// delete meta;
	// delete cat;
	// delete dog;

	// WrongAnimal *obj = new WrongCat();
	
	// obj->makeSound();

	Animal obj = Animal();
	obj = Animal(obj);


}
