//4.2.Dla klasy Account, dodaj pole przechowujące jego typ (biznesowe,prywatne, oszczędnościowe)
    //• dodaj metodę zwracającą miesięczny koszt prowadzenia w zależności od typu

#include <iostream>
#include "Account.hpp"

int main()
{
    Account account;
    account.deposit(200);
    account.getBalance();
    std::cout << "Balance on your account: " << account.getBalance() << std::endl;
    account.withdraw(150);
    account.getBalance();
    std::cout << "Balance on your account: " << account.getBalance() << std::endl;
    
    std::cout << account.monthlyCost(0) << std::endl;
    std::cout << account.monthlyCost(1) << std::endl;
    std::cout << account.monthlyCost(2) << std::endl;

    //enum accountType t;
    ////t = businessA;
    ////t = privateA;
    //t = savingA;
    //std::cout << t << std::endl;
}
