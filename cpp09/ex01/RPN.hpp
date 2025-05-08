#pragma once

#include <iostream>
#include <stack>

class RPN
{
	std::stack<int> _stk;
	std::string _input;
	void parseInput();

	public:
	RPN();
	int getResult();
	RPN(const RPN &);
	RPN(std::string input);
	RPN &operator=(const RPN &);

	~RPN();
};