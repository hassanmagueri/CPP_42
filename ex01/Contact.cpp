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

std::string	truncat(std::string str)
{
	str.insert(0, std::string("          ").erase(0, str.size()));
    if (str.size() > 10)
    {
        str.resize(9);
        str += '.';
    }
	return str;
}

void Contact::search_output()
{
	std::string str;

	str = truncat(std::to_string(index)) + "|";
	str += truncat(first_name) + "|";
	str += truncat(last_name) + "|";
	str += truncat(nick_name) + "\n";
	std::cout << str;
}

void Contact::toString()
{
	std::cout << "index :" << this->index << ", " 
			<< "first_name :" << this->first_name << ", "
			<< "last_name :" << this->last_name << ", "
			<< "nick_name :" << this->nick_name << ", "
			<< "phone_number :" << this->phone_number << ", "
			<< "darkest_secret :" << this->darkest_secret << "\n";
}
