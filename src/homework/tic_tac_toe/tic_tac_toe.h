//tic_tac_toe.h
//Represents one game of tick tack toe
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H


#include <vector>
#include <string>
#include <iostream>

using std::string; using std::vector; using std::cout;

class TicTacToe {

public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player () const;
	//void display_board() const;
	friend std::istream& operator >> (std::istream& in,
		const TicTacToe& b);
	friend std::ostream& operator << (std::ostream& out,
		const TicTacToe& b);



private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	vector<string> pegs {9, " " }; //initilizer
	string next_player;





};
#endif // !TIC_TAC_TOE_H