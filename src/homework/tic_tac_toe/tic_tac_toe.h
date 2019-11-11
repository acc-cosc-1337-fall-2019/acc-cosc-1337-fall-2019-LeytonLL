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
	TicTacToe() {};
	TicTacToe(int size) : pegs(size * size, " ") {};
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player () const;
	string get_winner() const;
	const std::vector<std::string>& get_pegs();
	friend std::istream& operator >> (std::istream& in,
		TicTacToe& b);
	friend std::ostream& operator << (std::ostream& out,
		const TicTacToe& b);

protected:
	vector<string> pegs; //initilizer
	virtual bool check_column_win()=0;
	virtual bool check_row_win()=0;
	virtual bool check_diagonal_win()=0;


private:
	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
	string next_player;
	string winner;





};
#endif // !TIC_TAC_TOE_H