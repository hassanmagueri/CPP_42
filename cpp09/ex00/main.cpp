#include <iostream>
#include "BitcoinExchange.hpp"

int main()
{
	try
	{
		BitcoinExchange be;
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
