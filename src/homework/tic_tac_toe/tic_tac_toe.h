//tic_tac_toe.h
//Represents one game of tick tack toe
#include <vector>
#include <string>
#include <iostream>

using std::string; using std::vector; using std::cout;

class tic_tac_toe {

public:
	bool gameover();
	void startgame(string player);
	void markboard(int position);
	string getplayer (" ");
	void display_board() const;




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
