#include "phone.hpp"

bool ret_true(std::string str)
{
	return true;
}
bool is_str_digit(std::string str)
{
	for (int i = 0; i < str.size(); i++)
		if (std::isdigit(str[i]) == false)
			return false;
	return true;
}
bool is_str_alpha(std::string str)
{
	if (str.empty())
		return false;
	for (int i = 0; i < str.size(); i++)
		if (std::isalpha(str[i]) == false)
			return false;
	return true;
}

std::string	prompt(std::string msg, bool f(std::string))
{
	std::string inp;

	std::cout << "enter your " << msg << " : ";
	std::cin >> inp;
	if (!f(inp))
	{
		std::cerr << "\033[31m" "please enter a valid " << msg << "\033[0m" "\n";
		prompt(msg, f);
	}
	return inp;
}

void add_prompt()
{
	int i;

	std::string first_name = prompt("first name", is_str_alpha);
	std::string last_name = prompt("last name", is_str_alpha);
	std::string nick_name = prompt("nickname", ret_true);
	std::string phone_number = prompt("phone number", is_str_alpha);
	std::string darkest_secret = prompt("darkest secret", ret_true);

}

int main(int argc, char const *argv[])
{
	std::string inp = "";
	PhoneBook pb;

	// while (inp != "EXIT")
	// {
	// 	std::cin >> inp; 
	// 	if (inp == "ADD")
	// 	{
	// 		add_prompt();
	// 	}
	// }
	Contact *c1 = new Contact("hassan", "magueri", "HaSaN", "0658800390", "ana wa3er");
	pb.add(c1);
	Contact *c2 = new Contact("housain", "koko", "dont", "15645", "walo");
	pb.add(c2);
	Contact *c3 = new Contact("housain", "koko", "dont", "15645", "walo");
	pb.add(c3);
	Contact *c4 = new Contact("housain", "koko", "dont", "15645", "walo");

	pb.getContacts()[2]->tostring();
	// c3->search_output();

	// c4->tostring();
	
	return 0;
}
