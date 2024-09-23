#include "phone.hpp"

bool ret_true(std::string str)
{
	str += "";
	return true;
}
bool is_str_digit(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		if (std::isdigit(str[i]) == false)
			return false;
	return true;
}
bool is_str_index(std::string str)
{
	if (std::isdigit(str[0]) == false || str.size() > 1)
			return false;
	if (int(str[0]) < '0' || int(str[0]) > '7')
			return false;
	return true;
}
bool is_str_alpha(std::string str)
{
	if (str.empty())
		return false;
	for (size_t i = 0; i < str.size(); i++)
		if ((std::isalpha(str[i]) == false && str[i] != ' ' && str[i] != '_' && str[i] != '-'))
			return false;
	return true;

}
void str_to_upper(std::string &str)
{
	for (size_t i = 0; i < str.size(); i++)
		if (islower(str[i]))
			str[i] = char(toupper(str[i]));
}

std::string	prompt(std::string msg, bool f(std::string))
{
	std::string inp;

	std::cout << "enter your " << msg << " : ";
	std::getline(std::cin, inp);
	while (inp.find("\t") != std::string::npos)
		inp.replace(inp.find("\t"), 1, "    ", 4);
	if (std::cin.eof())
		std::exit(1);
	if (!f(inp))
	{
		std::cerr << "\033[31m" "please enter a valid " << msg << "\033[0m" "\n";
		return prompt(msg, f);
	}
	return inp;
}

void add_prompt(PhoneBook &pb)
{
	Contact cnt;

	std::string first_name = prompt("first name", is_str_alpha);
	std::string last_name = prompt("last name", is_str_alpha);
	std::string nick_name = prompt("nickname", ret_true);
	std::string phone_number = prompt("phone number", is_str_digit);
	std::string darkest_secret = prompt("darkest secret", ret_true);
	cnt = Contact(first_name, last_name, nick_name, phone_number, darkest_secret);
	pb.add(cnt);
}

void search_prompt(PhoneBook pb)
{
	std::string	inp;

	pb.toString();
	inp = prompt("index (0, 7)", is_str_index);
	pb.getContactByIndex(stoi(inp));
}

void file_phonebook(PhoneBook &pb)
{
	Contact c1 = Contact("aa", "aa", "aa", "aa", "aa");
	pb.add(c1);
	Contact c2 = Contact("bb", "bb", "bb", "bb", "bb");
	pb.add(c2);
	Contact c3 = Contact("cc", "cc", "cc", "cc", "cc");
	pb.add(c3);
	Contact c4 = Contact("dd", "dd", "dd", "dd", "dd");
	pb.add(c4);
	Contact c5 = Contact("ee", "ee", "ee", "ee", "ee");
	pb.add(c5);
	Contact c6 = Contact("ff", "ff", "ff", "ff", "ff");
	pb.add(c6);
	Contact c7 = Contact("gg", "gg", "gg", "gg", "gg");
	pb.add(c7);
	Contact c8 = Contact("hh", "hh", "hh", "hh", "hh");
	pb.add(c8);
	Contact c9 = Contact("ii", "ii", "ii", "ii", "ii");
	pb.add(c9);
	Contact c10 = Contact("jj", "jj", "jj", "jj", "jj");
	pb.add(c10);
	Contact c11 = Contact("kk", "kk", "kk", "kk", "kk");
	pb.add(c11);
}


int main()
{
	PhoneBook	pb;
	std::string inp;

	inp = "";
	while (inp != "EXIT")
	{
		std::cout << "\033[50m" "enter a commad (ADD, SEARCH, EXIT): "  "\033[0m";
		std::getline(std::cin, inp);
		if(std::cin.eof())
			std::exit(1);
		if (inp == "ADD")
			add_prompt(pb);
		else if (inp == "SEARCH")
			search_prompt(pb);
	}
	return 0;
}
