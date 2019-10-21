//bank_account.h
#include <iostream>

#ifndef BANK_ACCOUNT_H //header guards - to prevent class redefinition error
#define BANK_ACCOUNT_H
class BankAccount
{
public:
	BankAccount();
	BankAccount(int b) : balance(b) {}; //inline constructor
	virtual int get_balance() const; //const makes class members read only
	void deposit(int amount);
	void withdrawl(int amount);

	friend void display(const BankAccount& account);
	friend std::ostream & operator << (std::ostream & out, 
		const BankAccount & b);
	friend std::istream & operator >> (std::istream & in,
		const BankAccount & b);
	BankAccount operator+ (const BankAccount& b);

protected:
	
	
	
	int balance;




};
#endif