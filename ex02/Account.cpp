/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:46:14 by anarama           #+#    #+#             */
/*   Updated: 2024/10/02 14:17:08 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Account.hpp"

# define BUFFER_SIZE 16
# define DEFAULT_AMOUNT 0
# define DEFAULT_NBDEPOSITIS 0
# define DEFAULT_NBWITHDRAWALS 0

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp(void)
{
	time_t		current_time;
	char 		buffer[BUFFER_SIZE];

	time(&current_time);
	strftime(buffer, BUFFER_SIZE, "%G%m%e_%H%M%S", localtime(&current_time));
	std::cout << "[" << buffer << "] ";
}


void	Account::makeDeposit( int deposit ) {
	this->_nbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<  ";p_amount:"
		<< this->_amount << ";deposit:" << deposit << ";amount:"
		<< this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if (this->_amount - withdrawal < 0) {
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex <<  ";p_amount:"
		<< this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_nbWithdrawals += 1;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<  ";p_amount:"
		<< this->_amount << ";withdrawal:" << withdrawal << ";amount:"
		<< this->_amount - withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	return true;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
			<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals()
			<< std::endl;
}

Account::Account( int initial_deposit ) :  _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(DEFAULT_NBDEPOSITIS), _nbWithdrawals(DEFAULT_NBDEPOSITIS) {
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";created" << std::endl;
	_nbAccounts++;
}

Account::Account( void ) : _amount(DEFAULT_AMOUNT), _nbDeposits(DEFAULT_NBDEPOSITIS), _nbWithdrawals(DEFAULT_NBDEPOSITIS) {}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";closed" << std::endl;
}
