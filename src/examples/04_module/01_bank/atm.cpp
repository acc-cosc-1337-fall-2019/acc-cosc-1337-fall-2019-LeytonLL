#include "atm.h"
#include<iostream>
//atm.cpp
using std::cout;

ATM::ATM() : account(1000)
{
	//have a class that gets balance from database

}

ATM::ATM(BankAccount a) : account(a)
{
	//have a class that gets balance from Database
}
void ATM::deposit(int amount)
{
	account.deposit(amount);
}

void ATM::withdraw(int amount)
{
	account.withdrawl(amount);
}


void ATM::display_balance() const
{
	cout << "Balance: " << account.get_balance() << "\n";
}
