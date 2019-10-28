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
	
	int num = 5;
	int & num_ref = num;
	std::cout << "Address: " << &num_ref;

	return 0;



}