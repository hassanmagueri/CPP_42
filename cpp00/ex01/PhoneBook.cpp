#include "PhoneBook.hpp"

// uint8_t PhoneBook::size = 0;

PhoneBook::PhoneBook()
{
	size = 0;
	index = 0;
}

PhoneBook::~PhoneBook()
{
	delete [] *contacts;
}

void PhoneBook::add(Contact *contact)
{
	if (size >= 8)
		delete(this->contacts[index % 8]);
	this->contacts[index % 8] = contact;
	if (this->size < 8)
		++this->size;
	index++;
}

bool PhoneBook::getContactByIndex(int index)
{
	if (index >= 0 && index < size)
		return (contacts[index]->toString(), true);
	std::cout << "Sorry, we do not have a record of this user.\n";
	return  false;
}

void PhoneBook::toString()
{
	for (int i = 0; i < size; i++)
	{
		contacts[i]->search_output(i);
		std::cout << "\n";
	}
}