/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:34:21 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/06 17:41:39 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include<iostream>

void  Account::_displayTimestamp() {
    std::time_t timestamp = std::time(0);
    std::tm *time = std::gmtime(&timestamp);
    std::string year = std::to_string(time->tm_year + 1900);
    std::string month = std::to_string(time->tm_mon + 1);
    std::string day = std::to_string(time->tm_mday);
    std::string hour = std::to_string(time->tm_hour);
    std::string minute = std::to_string(time->tm_min);
    std::string second = std::to_string(time->tm_sec);
    std::string formatDate = year + month + day + "_" + hour + minute + second;
    std::cout << "[" + formatDate + "]";
}

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
    Account::_displayTimestamp();
    std::cout << " index:" << t::_accountIndex << ";amount:" << t::_amount << ";created" << std::endl;
}

Account::~Account(void) {

    Account::_displayTimestamp();
    std::cout << " index:" << t::_accountIndex;
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
    Account::_displayTimestamp();
    std::cout << " accounts:" << t::getNbAccounts() << ";total:" << t::getTotalAmount();
    std::cout << ";deposits:" << t::getNbDeposits() << ";withdrawls:" << t::getNbWithdrawals();
    std::cout << std::endl;
}

int Account::checkAmount(void) const {
    return (t::_amount);
}

void Account::makeDeposit(int deposit) {
    int p_amount = t::_amount;
    t::_amount = p_amount + deposit;
    t::_nbDeposits = t::_nbDeposits + 1;
    t::_totalAmount = t::getTotalAmount() + deposit;
    t::_totalNbDeposits = t::getNbDeposits() + 1;
    Account::_displayTimestamp();
    std::cout << " index:" << t::_accountIndex << ";p_amount:" << p_amount << ";deposit:";
    std::cout << deposit << ";amount:" << t::_amount << ";nb_deposits:" << t::_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    int p_amount = t::_amount;
    if (withdrawal > p_amount)
    {
        Account::_displayTimestamp();
        std::cout <<" index:" << t::_accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
        return false;
    }
    t::_amount = p_amount - withdrawal;
    t::_nbWithdrawals = t::_nbWithdrawals + 1;
    t::_totalAmount = t::getTotalAmount() - withdrawal;
    t::_totalNbWithdrawals = t::getNbWithdrawals() + 1;
    Account::_displayTimestamp();
    std::cout << " index:" << t::_accountIndex << ";p_amount:" << p_amount << ";withdrawal:";
    std::cout << withdrawal << ";amount:" << t::_amount << ";nb_withdrawals:" << t::_nbWithdrawals << std::endl;
    return true;
}

void Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << " index:" << t::_accountIndex << ";amount:" << t::_amount << ";deposits:";
    std::cout <<t::_nbDeposits << ";withdrawls:" << t::_nbWithdrawals << std::endl;
}