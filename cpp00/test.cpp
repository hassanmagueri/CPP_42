#include <iostream>
#include <string>
#include <ctime>

void	_displayTimestamp(void)
{
	time_t tms;
	tm *tm;
	char	buffer[19];

	tms = time(NULL);
    std::cout << tms << std::endl;
	tm = localtime(&tms);
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", tm);
	std::cout << buffer << std::endl;
}

int main() {
    _displayTimestamp();
    std::string str("dasdasdasasdasdasdasdasdasdasdasa");

    std::cout << str.size() << std::endl;
    std::cout << str.capacity() << std::endl;
    // std::cout << "Max size of string: " << str.max_size() << " characters" << std::endl;
    // std::cout << "npos value: " << std::string::npos << std::endl;
    return 0;
}