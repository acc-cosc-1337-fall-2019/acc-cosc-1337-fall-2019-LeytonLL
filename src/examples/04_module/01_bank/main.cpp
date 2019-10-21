#include <iostream>
#include<vector>
#include "bank_account.h"
#include "atm.h"
#include "customer.h"
#include "checking_account.h"
#include "savings_account.h"
#include <functional>

using std::cout;
using std::vector;
using std::cin; 
using std::reference_wrapper;
int main()
{
	CheckingAccount c(1500);
	SavingsAccount s(500);

	vector<reference_wrapper <BankAccount>>	accounts 
	{ c, s };
	
	for (auto act : accounts)
	{
		cout << "Balance: " << act.get().get_balance() << "\n";
	}

	return 0;



}