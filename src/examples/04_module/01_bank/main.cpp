#include <iostream>
#include<vector>
#include "bank_account.h"
#include "atm.h"
#include "customer.h"
#include "checking_account.h"
#include "savings_account.h"

using std::cout;
using std::vector;
using std::cin;
int main()
{
	CheckingAccount a(1500);
	cout << "\n Checking get_balance: " << a.get_balance() << "\n";

	SavingsAccount savings(500);
	cout <<"\n Savings get_balance: " << savings.get_balance() << "\n";

	BankAccount& account = savings;
	cout << "\n Ref to savings get_balance: " << account.get_balance() << "\n";

	return 0;



}