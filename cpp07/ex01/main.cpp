#include "iter.hpp"
#include <iostream>

void f(int &n)
{
	n *= 10;
}

int main( void ) {
	
	int arr[] = {0,1,2,3,4,5,6,7,8,9};

	iter(arr, 10, f);

	for (int i = 0; i < 10;i++)
		std::cout << arr[i] << std::endl;

	return 0;
}

