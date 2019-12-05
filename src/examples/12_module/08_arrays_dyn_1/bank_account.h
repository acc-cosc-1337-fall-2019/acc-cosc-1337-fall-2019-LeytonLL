//write basic class with default constructor, parameter int constructor to inialize balance
//const get balance to return  balance
//private class member balance initialized to 0

class BankAccount
{
public:
	
	BankAccount() {}
	void get_balance() const { return balance; }
	int getbalance()const { return balance; }
private:
	int balance{ 0 };



};