//
#include "report.h"
#include<iostream>

MyReport::MyReport()
	:accounts{ new BankAccount*[SIZE] } //SAVE FIVE memory adresses
{		
	//creates dynamic memory(heap
	accounts = new BankAccount[SIZE]; //CALLS DEFEAULT CONSTRUCTOR
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAccount(i * 10); //calls default constructor
	}
}

void MyReport::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i]->get_balance << "\n";
	}

}

MyReport::~MyReport()
{

	for (int i = 0; i < SIZE; ++i)
	{
		delete accounts[i];
	}

	delete[] accounts;
}