#include "Account.hpp"
#include <string>
#include <iostream>

std::string Account::generateBankNumber()
{
    return std::string();
}

Account::Account()
{

}

int Account::withdraw(int amount)
{
    balance -= amount;
    return 0;
}

void Account::deposit(int amount)
{
    balance += amount;
}

int Account::getBalance()
{
    return balance;
}

int Account::monthlyCost(int t)
{
    //enum accountType t;
    ////t = businessA;
    ////t = privateA;
    //t = savingA;
    //std::cout << t << std::endl;
    switch (t)
    {
    case 0:
        std::cout << "You own business account.";
        break;
    case 1:
        std::cout << "You own private account.";
        break;
    case 2:
        std::cout << "You own saving account.";
        break;
    }
    return 0;
}



