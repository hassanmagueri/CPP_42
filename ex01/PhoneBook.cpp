#include "PhoneBook.hpp"


void PhoneBook::add(Contact *contact)
{
	this->contacts[contact->getIndex() % 7] = contact;
}
