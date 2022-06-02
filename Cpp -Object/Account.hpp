#pragma once
#include <string>

class Account {
	int balance = 0;
	std::string number;
	std::string generateBankNumber();
public:
	Account();
	int withdraw(int amount);
	void deposit(int amount);
	int getBalance();
};