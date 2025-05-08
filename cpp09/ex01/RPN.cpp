#include "RPN.hpp"

RPN::RPN()
{
	_input = "";
}

RPN::RPN(std::string input)
{
	_input = input;
}

bool isOpr(char c)
{
	return (c == '-' || c == '+' || c == '/' || c == '*') ? true : false;
}

void RPN::parseInput()
{
	for (size_t i = 1; i < _input.length(); i += 2)
		if (_input[i] != ' ' || _input[i - 1] == ' ')
			throw std::runtime_error("Error 1");
	_input.erase(std::remove(_input.begin(), _input.end(), ' '), _input.end());
	int count = 0;
	for (size_t i = 0; i < _input.length(); i++)
	{
		if (isdigit(_input[i]))
			++count;
		else if (isOpr(_input[i]))
			--count;
		else
			throw std::runtime_error("Error 2");
	}
	if (count != 1)
		throw std::runtime_error("Error 3");
}

int calc(int n1, int n2, char op)
{
	if (op == '+')
		return n1 + n2;
	else if (op == '-')
		return n1 - n2;
	else if (op == '*')
		return n1 * n2;
	return n1 / n2;
}

int RPN::getResult()
{
	parseInput();
	for (size_t i = 0; i < _input.length(); i++)
	{
		if (std::isdigit(_input[i]))
			_stk.push(std::strtol(_input.substr(i, 1).c_str(), NULL, 10));
		else
		{
			if (_stk.size() < 2) throw std::runtime_error("Error 3");
			int n2 = _stk.top();
			_stk.pop();
			int n1 = _stk.top();
			_stk.pop();
			_stk.push(calc(n1, n2, _input[i]));
		}
	}
	return _stk.top();
}

RPN::RPN(const RPN &)
{
}

RPN &RPN::operator=(const RPN &)
{
	return *this;
}

RPN::~RPN()
{
}