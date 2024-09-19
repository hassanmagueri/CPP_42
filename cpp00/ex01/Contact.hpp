#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# define TRUNCATE_LEN 10

class Contact
{
	private:
    	size_t index;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
		std::string truncate(std::string str);
    public:
		Contact();
        Contact(std::string first_name, std::string last_name,
				std::string nick_name, std::string phone_number,
				std::string darkest_secret);
		~Contact(){};
        void search_output(int index);
        void toString();
};

#endif