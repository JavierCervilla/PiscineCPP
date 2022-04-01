/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:34:21 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/01 14:04:10 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include<iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int inital_deposit) {
    t::_accountIndex = t::getNbAccounts();
    t::_nbAccounts = t::getNbAccounts() + 1;
    t::_amount = inital_deposit;
    t::_nbDeposits = 0;
    t::_nbWithdrawals = 0;
    t::_totalAmount = t::getTotalAmount() + inital_deposit;
    std::cout << "[" << "TIMESTAMP" << "] index:" << t::_accountIndex << ";amount:" << t::_amount << ";created" << std::endl;
}

Account::~Account(void) {
    std::cout << "[" << "TIMESTAMP" << "] index:" << t::_accountIndex;
    std::cout << ";amount:" << t::_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
    return (t::_nbAccounts);
}

int Account::getTotalAmount(void) {
    return (t::_totalAmount);
}

int Account::getNbDeposits(void) {
    return (t::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
    return (t::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {
    std::cout << "[" << "TIMESTAMP" << "] accounts:" << t::getNbAccounts() << ";total:" << t::getTotalAmount();
    std::cout << ";deposits:" << t::getNbDeposits() << ";withdrawls:" << t::getNbWithdrawals();
    std::cout << std::endl;
}

int Account::checkAmount(void) const {
    return (t::_amount);
}

void Account::makeDeposit(int deposit) {
    t::_amount = t::_amount + deposit;
    t::_nbDeposits = t::_nbDeposits + 1;
    t::_totalAmount = t::getTotalAmount() + deposit;
    t::_totalNbDeposits = t::getNbDeposits() + 1;
}

bool Account::makeWithdrawal(int withdrawal) {
    if (withdrawal <= t::checkAmount())
        return false;
    t::_amount = t::checkAmount() - withdrawal;
    t::_nbWithdrawals = t::_nbWithdrawals + 1;
    t::_totalAmount = t::getTotalAmount() - withdrawal;
    t::_totalNbWithdrawals = t::getNbWithdrawals() + 1;
    return true;
}

void Account::displayStatus(void) const {
    std::cout << "[" << "TIMESTAMP" << "] index:" << t::_accountIndex << ";amount:" << t::_amount << ";deposits:";
    std::cout <<t::_nbDeposits << ";withdrawls:" << t::_nbWithdrawals << std::endl;
}