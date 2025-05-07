#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
	: dataFile("data.csv"), inputFile("input.txt")
{
	if (!dataFile || !inputFile)
		throw std::runtime_error("Error: could not open file.");
	lineNum = 0;
	setDataMap();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &)
{
	lineNum = 0;
}
BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &)
{
	return *this;
}

BitcoinExchange::BitcoinExchange(const std::string &data, const std::string &input)
	: dataFile(data), inputFile(input)
{
	lineNum = 0;
	if (!dataFile || !inputFile)
		throw std::runtime_error("Error: could not open file.");
}

bool printError(unsigned long lineNum, std::string msg)
{
	std::cerr << "input.txt:" << lineNum << " " << msg << std::endl;
	return false;
}

bool BitcoinExchange::parseDate(const std::string dateStr)
{
	for (size_t i = 0; i < dateStr.length(); i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(dateStr[i]))
			return printError(lineNum, "Error: the year or month or day has non digit");
	}
	if (dateStr.at(4) != '-' || dateStr.at(7) != '-')
		return printError(lineNum, "Error: '-' is missing in date feild");
	return true;
}

bool BitcoinExchange::setDate(const std::string &line, std::string &dateStr)
{
	size_t pos = line.find("|");
	if (pos == std::string::npos)
		return printError(lineNum, "Error: there is no | in line ");
	dateStr = line.substr(0, pos);
	if (parseDate(line.substr(0, pos)) == false)
		return false;
	long year = strtol(line.c_str(), NULL, 10);
	long date = year * 10000;

	long month = strtol(line.substr(5, 2).c_str(), NULL, 10);
	date += month * 100;
	long day = strtol(line.substr(8, 2).c_str(), NULL, 10);
	date += day;
	// std::cout << "date: " << date << std::endl;
	if (month > 12)
		return printError(lineNum, "Error: invalid month");
	if (day >= 28)
	{
		if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 11) && day > 31)
			return printError(lineNum, "Error: invalid day");
		if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
			return printError(lineNum, "Error: invalid day");
		if (month == 2)
		{
			if ((year % 4 == 0 && day > 29) || (year % 4 != 0 && day > 28))
				return printError(lineNum, "Error: invalid day");
		}
	}
	return true;
}

bool BitcoinExchange::setValue(const std::string &line, double &value)
{
	char *end;
	std::string valueStr = line.substr(line.find('|') + 1);
	value = strtod(valueStr.c_str(), &end);
	if (*end != '\0' || valueStr.empty() || value < 0 || value > 1000)
	{
		printError(lineNum, "Error: invalid value");
		return false;
	}
	return true;
}

void BitcoinExchange::praseInputFile()
{
	std::string line;
	getline(inputFile, line);
	line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
	++lineNum;
	if (line != "date|value")
		throw std::runtime_error("Error: invalid head");

	while (getline(inputFile, line))
	{
		line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
		++lineNum;
		std::string date;
		double value = 0;
		if (setDate(line, date) == false || setValue(line, value) == false)
			continue;
		if (dataMap.empty())
		{
			printError(lineNum, "Error: empty data");
			continue;
		}
		std::map<std::string, double>::iterator it = dataMap.upper_bound(date);
		if (it != dataMap.begin())
			it = prev(it);
		std::cout << "date: " << it->first << std::endl;
		std::cout << date << " => " << value << " = " << it->second * value << std::endl;
	}
}

void BitcoinExchange::setDataMap()
{
	std::string line;
	while (getline(dataFile, line))
	{
		size_t pos = line.find(",");
		if (pos == std::string::npos || line.length() <= 11)
			continue;
		bool isDigit = 1;
		size_t i;
		for (i = 0; i < line.length(); i++)
		{
			if (i == 4 || i == 7 || i == 10)
				continue;
			if (std::isdigit(line.at(i)) == false)
			{
				if (i > 10 || line.at(i) == '.')
					continue;
				isDigit = 0;
				break;
			}
		}
		if (isDigit == 0 || i < 10)
			continue;
		std::string dateStr = line.substr(0, pos);
		dataMap[dateStr] = strtod(line.substr(pos + 1).c_str(), NULL);
	}
}