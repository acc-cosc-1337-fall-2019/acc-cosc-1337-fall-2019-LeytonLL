
#include"bank_account.h"

#include<iostream>


int main()
{
	//stack/static array of objects
	BankAccount accounts[3]; //executes defeault constrcrutor
	
	//read data file or database
	//initialize the balances

	//iterate array with auto and display balance
	for (int i = 0; i < 3; i++)
	{
		std::cout << accounts[i].get_balance() << '/n';
	}

	//stack/static array
	//read data file or database
	//initialize with an initializer list

	BankAccount accounts1 = { BankAccount(5), BankAccount(10), BankAccount(50) };

	//create static array of accounts initalize accounts w 5, 10, 50, and 100 
	

	//write code to display balances

	   
	return 0;
}