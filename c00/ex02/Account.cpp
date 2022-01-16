/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 16:57:41 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/15 19:35:42 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>
#include "Account.hpp"

void    Account::makeDeposit(int initial_deposit) 
{
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposits:" << initial_deposit << ";amount:" << _amount + initial_deposit << ";nb_deposits:" << _nbDeposits <<  std::endl;
	_amount += initial_deposit;
	_totalNbDeposits += 1;
	_totalAmount += _amount;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << "refused" << std::endl;
		_totalAmount += _amount;
		return false;
	}
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals <<  std::endl;
		_amount -= withdrawal;
		_totalAmount += _amount;
		return true;
	}
	return true;
}

int		Account::checkAmount( void ) const
{
	return 0;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	time_t actuel = time(0);
	tm *ltm = localtime(&actuel);
	std::cout << "[" << 1900 + ltm->tm_year;
	if (1 + ltm->tm_mon < 10)
		std::cout << "0";
	std::cout << 1 + ltm->tm_mon;
	if (ltm->tm_mday < 10)
		std::cout << "0";
	std::cout <<  ltm->tm_mday << "_";
	if (ltm->tm_hour < 10)
		std::cout << "0";
	std::cout << ltm->tm_hour;
	if (1 + ltm->tm_min < 10)
		std::cout << "0";
	std::cout << 1 + ltm->tm_min;
	if (1 + ltm->tm_sec < 10)
		std::cout << "0";
	std::cout << 1 + ltm->tm_sec << "] ";
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	return ;
}

Account::Account(int initial_deposit)
{
	Account::_accountIndex = _nbAccounts;
	_totalAmount += initial_deposit ;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	_nbAccounts++;
	return ;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}
int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
	_totalAmount = 0;
	return ;
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;
