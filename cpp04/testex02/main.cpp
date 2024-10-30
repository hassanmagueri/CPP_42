/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:11:03 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 16:54:57 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void f() { system("leaks main"); }

int main()
{
	// atexit(f);

	Dog d = Dog();
	
	AAnimal *a = &d;

	return (0);
}
