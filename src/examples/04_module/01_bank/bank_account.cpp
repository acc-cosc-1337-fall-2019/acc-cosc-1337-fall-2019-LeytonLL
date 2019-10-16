#include "bank_account.h"
#include <iostream>
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

void BankAccount::withdrawl(int amount)
{
	if (balance > amount)
	{
		balance = balance - amount;

	}
}

BankAccount BankAccount::operator+(const BankAccount & b)
{
	BankAccount account;
	account.balance = balance + b.balance;
	
	
	return account;
}

int BankAccount::get_balance() const
{
	return balance;
}

void display(const BankAccount& account)
{
	std::cout << "Balance: " << account.balance << "\n";
}

std::ostream & operator << (std::ostream & out,
	const BankAccount & b)
{
	out << "Balance: " << b.balance << "\n";

	return out;
}


std::istream & operator >> (std::istream & in,
 BankAccount & b)
{
	int amt;
	std::cout << "\n Enter amount: ";
	in >> amt;

	b.deposit(amt);

	return in;
}