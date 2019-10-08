//bank_account.h
#ifndef BANK_ACCOUNT_H //header guards - to prevent class redefinition error
#define BANK_ACCOUNT_H
class BankAccount
{
public:
	BankAccount();
	BankAccount(int b) : balance(b) {}; //inline constructor
	void deposit(int amount);
	void withdrawl(int amount);
	int get_balance() const; //const makes class members read only

private:
	int balance;




};
#endif