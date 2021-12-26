//
// Created by Marleen Maryjane on 8/7/21.
//
#include <ctime>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

Account::Account() {}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    _accountIndex = Account::_nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    Account::_totalAmount += _amount;
    Account::_nbAccounts++;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount <<
                ";created" << std::endl;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount <<
              ";closed" << std::endl;
}

int Account::getNbAccounts() {return Account::_nbAccounts;}
int Account::getTotalAmount() {return Account::_totalAmount;}
int Account::getNbDeposits() {return Account::_totalNbDeposits;}
int Account::getNbWithdrawals() {return Account::_totalNbWithdrawals;}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " accounts:" << Account::_nbAccounts << ";total:" <<
            Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits <<
            ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    int p_amount = _amount;

    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    Account::_totalNbDeposits++;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount <<
              ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" <<
              _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
    if (withdrawal > _amount)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else {
        _amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        _nbWithdrawals++;
        std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount <<
                  ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (true);
    }
}

int		Account::checkAmount(void) const {return (_amount);}

void	Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount <<
              ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals <<
              std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t current_time = time(NULL);
    tm *current_l_time = localtime(&current_time);
    std::cout << std::setfill('0') << "[" << current_l_time->tm_year + 1900 <<
    			std::setw(2) << current_l_time->tm_mon + 1 << std::setw(2) <<
    			current_l_time->tm_mday << "_" << std::setw(2) <<
    			current_l_time->tm_hour << std::setw(2) <<
    			current_l_time->tm_min << std::setw(2) <<
    			current_l_time->tm_sec << "]";
}
