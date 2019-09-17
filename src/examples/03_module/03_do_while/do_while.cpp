#include<iostream>
#include "do_while.h"
#include "switch.h"

using std::cout;
using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  

void prompt_user()
{
	auto user_choice = 'y';

	do
	{
		
		cout << "Loop again? y or n?";
		cin >> user_choice;
	} 
	while (user_choice== 'y' || user_choice== 'Y');
}




//Write code for function run_menu that prompts  user for a 
//number from 1 to 4 and displays the option user selected.
/*
Use the existing menu_option function from /example/02_module/03_switch
folder.

*/

void run_menu()
{
	auto user_choice = 'y';
	auto choice = 0;
	
	do
	{
		cout << "Enter menu option: ";
		cin >> choice;
		
		while (choice < 1 || choice > 4)
		{
			cout << "Enter menu option: ";
			cin >> choice;
		}

		
		cout << menu(choice)<<"\n";

		cout << "Countinue y or n";
		cin >> user_choice;
	} while (user_choice == 'y' || user_choice == 'Y');
}
