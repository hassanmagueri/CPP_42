#include "Contact.hpp"

size_t Contact::count = 0;

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nick_name = "";
	this->phone_number = "";
	this->darkest_secret = "";
	this->index = this->count;
	this->count++;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name,
			std::string phone_number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nick_name = nick_name;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
	this->index = this->count;
	this->count++;
}



void Contact::search_output()
{
	std::cout << "index :" << this->index << "|"
				<< "first_name :" << this->first_name << "|"
				<< "last_name :" << this->last_name << "|"
				<< "nick_name :" << this->nick_name << "\n";
}

void Contact::tostring()
{
	std::cout << "index :" << this->index << ", " 
			<< "first_name :" << this->first_name << ", "
			<< "last_name :" << this->last_name << ", "
			<< "nick_name :" << this->nick_name << ", "
			<< "phone_number :" << this->phone_number << ", "
			<< "darkest_secret :" << this->darkest_secret << "\n";
}
