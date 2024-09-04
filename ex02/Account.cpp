#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initail_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initail_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount+= this->_amount;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account(void)
{
	// index:0;amount:47;closed
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

void Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
			<< ";deposit:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
			<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	// index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit 
			<< ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int p_amount;

	p_amount = _amount;
	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		// index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount 
					<< ";withdrawal:" << withdrawal << ";amount:" << _amount
						<< ";nb_withdrawals:" << _nbWithdrawals << std::endl; 
		return (true);
	}
	// index:0;p_amount:47;withdrawal:refused
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount 
				<< ":refused" << std::endl; 
	return (false);
}
