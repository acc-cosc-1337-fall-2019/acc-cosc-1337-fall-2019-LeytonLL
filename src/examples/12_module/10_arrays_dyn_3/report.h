//constructor use for loop to initialize account to increments of 10 balance (5 times)
//display iterate and display array
//free memory using a loop to delete an nullify

class MyReport
{
public:
	MyReport();
	void display() const;
	~MyReport();
private:
	BankAccount** accounts; //pointer to pointer
	const int SIZE{ 5 };
};

