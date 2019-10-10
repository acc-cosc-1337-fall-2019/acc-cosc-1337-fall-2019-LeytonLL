#include <iostream>
#include<vector>
#include "bank_account.h"
#include "atm.h"

using std::cout;
using std::vector;
using std::cin;
int main()
{
	BankAccount a;
	BankAccount b = a;
	display(a); //class friend function
	//scan card and enter pin
	//get customer records from database into a vector
	vector<BankAccount> accounts{ BankAccount(500), BankAccount(600), BankAccount(1000) };

	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();  
	cout << a; //overload operator

	return 0;




	/*vector<BankAccount> accounts;
	BankAccount b1;
	accounts.push_back(b1);
	accounts.push_back(BankAccount(750));


	for (auto account : accounts)
	{
		cout << "Balance: " << account.get_balance() << "\n";
	}

	return 0; */
}