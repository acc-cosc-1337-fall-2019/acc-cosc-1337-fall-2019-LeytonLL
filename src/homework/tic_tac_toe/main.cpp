
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
	unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();
	string player = "";
	int game_type;


	do 
	{
		cout << "Play win by 3 or 4: ";
		cin >> game_type;
		unique_ptr<TicTacToe> game;

		if(game_type == 3)
		{ 
			game = std::make_unique<TicTacToe3>();
		
		}
		else
		{
			game = std::make_unique<TicTacToe4>();


		}
		

		cout << "Enter X or O";
		cin >> player;

		game->start_game(player);

		while (game->game_over() == false) 
		{
			cin >> *game;
			cout << *game;
		}

		manager->save_game(game);

		cout << "Game over: \n";
		cout << "Continue y or n ";
		cin >> response;

	
	} while (response == 'y' || response == 'Y');

	cout << "History: \n";
	cout << *manager;



	return 0;
}