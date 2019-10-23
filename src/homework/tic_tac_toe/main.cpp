
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	auto response = 'y';
	TicTacToeManager manager;
	
	string player = "";

	do 
	{
		TicTacToe game;

		cout << "Enter X or O";
		cin >> player;
		game.start_game(player);

		while (game.game_over() == false) 
		{
			cin >> game;
			cout << game;
		}

		manager.save_game(game);

		cout << "Game over: \n";
		cout << "Continue y or n ";
		cin >> response;

	
	} while (response == 'y' || response == 'Y');

	cout << "History: \n";
	cout << manager;



	return 0;
}