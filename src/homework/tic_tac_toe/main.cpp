
#include "tic_tac_toe_manager.h"
#include <tic_tac_toe_3.h>
#include <tic_tac_toe_4.h>

#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;

int main() 
//tic TacToe3
{
	auto response = 'y';
	TicTacToeManager manager;
	string player = "";
	int game_type;


	do 
	{
		cout << "Play win by 3 or 4: ";
		cin >> game_type;
		TicTacToe* game;

		if(game_type == 3)
		{ 
			game = new TicTacToe3();
		
		}
		else
		{
			game = new TicTacToe4();


		}
		

		cout << "Enter X or O";
		cin >> player;

		game->start_game(player);

		while (game->game_over() == false) 
		{
			cin >> *game;
			cout << *game;
		}

		manager.save_game(*game);

		cout << "Game over: \n";
		cout << "Continue y or n ";
		cin >> response;

	
	} while (response == 'y' || response == 'Y');

	cout << "History: \n";
	cout << manager;



	return 0;
}