//write includes statements
#include<iostream>
#include<loops.h>

//write using statements for cin and cout
using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	char userchoice = 'y';
	do
	{
		int begin = 0;
		int release = 0;
		
		cout << "Please enter a number you want the factorial for: ";
		cin >> begin;

		release = factorial(begin);

		cout << "The factorial for that number is " << release << "\n";
		cout << "Continue? Y for another factorial, N for the program to end." << "\n";
		cin >> userchoice;
	} while (userchoice == 'y' || userchoice == 'Y');


	return 0;
}