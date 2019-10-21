#include "tic_tac_toe.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	auto response = 'y';
	TicTacToe board;
	string player = "";

	do 
	{
		cout << "Enter X or O";
		cin >> player;
		board.start_game(player);

		while (!board.game_over()) 
		{
			cin >> board;
			cout << board;
		}

		cout << "Game over: \n";
		cout << "Continue y or n ";
		cin >> response;

	
	} while (response == 'y' || response == 'Y');



	return 0;
}