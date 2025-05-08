/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:45:34 by emagueri          #+#    #+#             */
/*   Updated: 2025/05/08 16:45:35 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cerr << "should enter a file\n";
		return 1; 
	}
	try
	{
		BitcoinExchange be = BitcoinExchange("data.csv", argv[1]);
		be.praseInputFile();

		// std::cout << "be.dataMap[2014-10-19]" << be.dataMap[20141019] << std::endl;
		// std::cout << "be.dataMap[2014-11-05]" << be.dataMap[20141105] << std::endl;
		// std::cout << be.dataMap.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
