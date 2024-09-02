#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# define TRUNCET_LEN 10

class Contact
{
	private:
    	static size_t count;
    	size_t index;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
		std::string tuncate(std::string str);
    public:
		Contact();
        Contact(std::string first_name, std::string last_name,
				std::string nick_name, std::string phone_number,
				std::string darkest_secret);
        // int getIndex(void) {return index;}
        void search_output(int index);
        void toString();
};

#endif