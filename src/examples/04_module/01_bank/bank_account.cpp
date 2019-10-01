#include "bank_account.h"
//bank_account.cpp
BankAccount::BankAccount()
{
	//code to read balance from database
	balance = 500;
}

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		//balance += amount;
		balance = balance + amount;
	}
}

int BankAccount::get_balance()
{
	return balance;
}