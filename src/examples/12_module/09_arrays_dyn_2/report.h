#include "bank_account.h"
//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory

class Report
{
public:
	Report();
	void display() const;
	~Report();
private:
	BankAccount* accounts;
};