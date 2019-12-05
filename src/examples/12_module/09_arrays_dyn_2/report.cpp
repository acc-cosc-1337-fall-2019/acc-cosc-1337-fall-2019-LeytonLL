//
#include "bank_account.h"
#include "report.h"
#include<iostream>

Report::Report()
{
	//creates dynamic memory
	accounts = new BankAccount[SIZE]; //CALLS DEFEAULT CONSTRUCTOR
}

void Report::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i].get_balance << "\n";
	}

}

Report::~Report()
{
	delete[] accounts;
}
