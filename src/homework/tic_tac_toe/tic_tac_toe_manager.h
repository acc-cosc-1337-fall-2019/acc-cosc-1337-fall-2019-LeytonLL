//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include"tic_tac_toe.h"
#include <memory>
#include <vector>
#include <iostream>
#include <functional>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::vector;
using std::ostream;
using std::unique_ptr;

class TicTacToeManager
{
public:
	void save_game(unique_ptr<TicTacToe>& game);
	friend ostream& operator<<(ostream& out, const TicTacToeManager& m);
	const std::vector<std::unique_ptr<TicTacToe>>& get_games();
	void get_winner_totals(int& x, int& o, int& c);
	std::unique_ptr<TicTacToe> get_game(int game_type);
private:
	void update_winner_count(string winner);
	vector <unique_ptr<TicTacToe>> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };

};

#endif // !TIC_TAC_TOE_MANAGER_H
