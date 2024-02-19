/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/19 16:23:39 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void) {
	std::time_t	time;
	std::tm		*now;

	std::time(&time);
	now = localtime(&time);
	std::cout	<< '['
				<< now->tm_year + 1900
				<< now->tm_mon + 1
				<< now->tm_mday
				<< '_'
				<< now->tm_hour
				<< now->tm_min
				<< now->tm_sec
				<< ']'
				<< ' ';
}

int	Account::getNbAccounts() {
	return (_nbAccounts);
}

int	Account::getTotalAmount() {
	return (_totalAmount);
}

int	Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts << ';'
				<< "total:" << _totalAmount << ';'
				<< "deposits:" << _totalNbDeposits << ';'
				<< "withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}

Account::Account(int initial_deposit) :
_accountIndex(_nbAccounts),
_amount(initial_deposit),
_nbDeposits(0),
_nbWithdrawals(0) {
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ';'
				<< "amount:" << _amount << ';'
				<< "created" << std::endl;
}

Account::~Account() {
	std::cout	<< "index:" << _accountIndex << ';'
				<< "amount:" << _amount << ';'
				<< "closed" << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ';'
				<< "p_amount:" << _amount << ';'
				<< "deposit:" << deposit << ';';
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout	<< "amount:" << _amount << ';'
				<< "nb_deposit:" << _nbDeposits
				<< std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal) {
	std::cout	<< "index:" << _accountIndex << ';'
				<< "p_amount:" << _amount << ';'
				<< "withdrawal:";
	if (_amount < withdrawal)
		return ((std::cout << "refused" << std::endl), false);
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout	<< withdrawal << ';'
				<< "amount:" << _amount << ';'
				<< "nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
	return (true);
}

int	Account::checkAmount(void) const{
	return (_amount);
}

void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ';'
				<< "amount:" << _amount << ';'
				<< "deposits:" << _nbDeposits << ';'
				<< "withdrawals:" << _nbWithdrawals
				<< std::endl;
	return ;
}
