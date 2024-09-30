/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:39:41 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/24 17:45:57 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(std::string name) { this->name = name; }

std::string File::strReplace(std::string str, std::string search, std::string replace)
{
	size_t index;

	if (search == "")
		return str;
	if ((index = str.find(search)) != std::string::npos)
	{
		return (str.substr(0, index) + replace +
				strReplace(str.substr(index + search.size()),
						   search, replace));
	}
	return str;
}

std::string File::readFileAndReplace(std::string search, std::string replace)
{
	std::string line;
	std::string buffer;

	std::ifstream infile(this->name);
	if (!infile)
		throw std::runtime_error("Error: Could not open file " + this->name);
	std::ofstream outfile(this->name + ".replace");
	if (!outfile)
	{
		infile.close();
		throw std::runtime_error("Error: Could not create file " + this->name);
	}
	while (!std::getline(infile, line).eof())
		buffer += line + "\n";
	buffer += line;
	outfile << strReplace(buffer, search, replace);
	infile.close();
	outfile.close();
	return (buffer);
}
