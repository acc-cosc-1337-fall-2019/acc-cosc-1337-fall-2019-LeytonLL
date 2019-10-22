//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include"tic_tac_toe.h"
#include <vector>
#include <iostream>

using std::vector;
using std::ostream;

class TicTacToeManager
{
public:
	void save_game(const TicTacToe game);
	friend ostream& operator<<(ostream& out, const TicTacToeManager& m);


private:
	void update_winner_count(string winner);
	vector <TicTacToe> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };

};

#endif // !TIC_TAC_TOE_MANAGER_H
