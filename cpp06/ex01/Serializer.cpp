#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t i = reinterpret_cast<uintptr_t >(ptr);
	std::cout << i << std::endl;
	return i;
}