#include <iostream>

class Bank {
	double balance = 0;
public:
	Bank()
	{

	}

	Bank(const Bank& old)
	{
		balance = old.balance;
	}
	~Bank()
	{

	}

	double withdraw(double amount) {
		double withdrew = amount;
		if (balance > amount)
		{
			balance -= amount;
		}
		else
		{
			withdrew = balance;
			balance = 0;
		}
		return withdrew;
	}

	double withdraw2(double amount) {
		if (balance >= amount)
		{
			balance -= amount;
		}
		return balance;
	}

	void deposit(double amount) {
		balance += amount;
	}

	double getBalance(); // deklaracja
};

double Bank::getBalance() // definicja
{
	return balance; //return this->balance tez by zadzialalo
}


int main() {
	Bank savingAccount1;
	Bank savingAccount2(savingAccount1);
	std::cout << savingAccount1.getBalance << savingAccount2.getBalance << std::endl;
	Bank savingAccount;
	savingAccount.deposit(100);
	std::cout << savingAccount.getBalance() << std::endl;
	double cash = savingAccount.withdraw(50);
	std::cout << cash << " " << savingAccount.getBalance() << std::endl;
	cash = savingAccount.withdraw(100); // 50
	std::cout << cash << " " << savingAccount.getBalance() << std::endl;
	return 0;
}
