#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int inital_deposit)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts++;
	this->_amount = inital_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount+= this->_amount;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

int	Account::getNbAccounts(void) { return _nbAccounts;}
int	Account::getTotalAmount(void) { return _totalAmount;}
int	Account::getNbWithdrawals(void) { return _totalNbWithdrawals;}
int	Account::getNbDeposits(void) {return _totalNbDeposits;}
int	Account::checkAmount( void ) const {return _amount;}

void	Account::_displayTimestamp(void)
{
	time_t tms;
	tm *tm;
	char	buffer[19];

	tms = time(NULL);
	tm = localtime(&tms);
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", tm);
	std::cout << buffer;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
			<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit 
			<< ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount;

	_displayTimestamp();
	p_amount = _amount;
	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount 
					<< ";withdrawal:" << withdrawal << ";amount:" << _amount
						<< ";nb_withdrawals:" << _nbWithdrawals << std::endl; 
		return (true);
	}
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount 
				<< ";withdrawal:refused" << std::endl; 
	return (false);
}


