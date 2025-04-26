#include <vector>
#include <iostream>

int main(int argc, char const *argv[])
{
	std::vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	std::vector<int> v2 = v1;
	v2.push_back(4);

	for (std::vector<int>::iterator it= v1.begin(); it < v1.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	for (std::vector<int>::iterator it= v2.begin(); it < v2.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	return 0;
}
