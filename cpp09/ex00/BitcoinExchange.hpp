#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>
#include <string>

class BitcoinExchange
{
    std::ifstream dataFile;
    std::ifstream inputFile;
    unsigned long lineNum;
    bool setDate(const std::string &line, std::string &date);
    bool parseDate(const std::string dateStr);
    bool setValue(const std::string &line, double &value);
    void setDataMap();

    public:
    std::map<std::string, double> dataMap;
    BitcoinExchange();
    void praseInputFile();
    BitcoinExchange(const BitcoinExchange &);
    BitcoinExchange &operator=(const BitcoinExchange &);
    ~BitcoinExchange();
    BitcoinExchange(const std::string &data,const std::string &input);

};