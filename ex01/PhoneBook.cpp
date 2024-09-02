#include "PhoneBook.hpp"

uint8_t PhoneBook::size = 0;

void PhoneBook::add(Contact *contact)
{
	this->contacts[contact->getIndex() % 8] = contact;
	if (this->size < 8)
		++this->size;
}

bool PhoneBook::getContactByIndex(int index)
{
	for (int i = 0; i < size; i++)
		if (contacts[i]->getIndex() == index)
			return (contacts[i]->toString(), true);
	std::cout << "Sorry, we do not have a record of this user.\n";
	return  false;
}

void PhoneBook::toString()
{
	for (int i = 0; i < size; i++)
	{
		contacts[i]->search_output();
		std::cout << "\n";
	}
}
