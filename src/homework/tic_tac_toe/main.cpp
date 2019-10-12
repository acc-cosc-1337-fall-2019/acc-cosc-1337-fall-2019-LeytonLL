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
	auto position = 0;
	string player = "";

	do 
	{
		cout << "Enter X or O";
		cin >> player;
		board.start_game(player);

		while (!board.game_over()) 
		{
			while (position < 1 || position > 9)
			{
				cout << "Enter position from 1 to 9\n";
				cin >> position;
			}

			board.mark_board(position);
			position = 0;
			board.display_board();
		}

		cout << "Game over: \n";
		cout << "Continue y or n ";
		cin >> response;

	
	} while (response == 'y' || response == 'Y');



	return 0;
}