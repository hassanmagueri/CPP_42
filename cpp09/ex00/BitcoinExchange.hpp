/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:45:21 by emagueri          #+#    #+#             */
/*   Updated: 2025/05/08 16:45:22 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>
#include <string>

class BitcoinExchange
{
    std::ifstream dataFile;
    std::ifstream inputFile;
    std::string fileName;
    unsigned long lineNum;
    bool setDate(const std::string &line, std::string &date);
    bool parseDate(const std::string dateStr);
    bool setValue(const std::string &line, double &value);
    bool printError(unsigned long lineNum, std::string msg);
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