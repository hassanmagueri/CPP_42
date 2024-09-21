#include "File.hpp"

File::File(std::string name) { this->name = name; }

std::string File::strReplace(std::string str, std::string search, std::string replace)
{
	size_t index;

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
		throw std::runtime_error("Error: Could not create file " + this->name);
	while (!std::getline(infile, line).eof())
	{
		buffer += strReplace(line, search, replace);
		if (search != "\n")
			buffer += "\n";
	}
	buffer += line;
	outfile << buffer;
	outfile.close();
	infile.close();
	return buffer;
}