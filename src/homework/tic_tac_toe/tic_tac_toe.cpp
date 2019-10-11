//cpp
#include "tic_tac_toe.h"

bool tic_tac_toe::gameover()
{
	if (check_column_win || check_diagonal_win || check_row_win || check_board_full)
	{
		return true;
	}
	return false;
}

void tic_tac_toe::startgame(string player)
{
	next_player = player;
	tic_tac_toe::clear_board();
}

/* Remember position is what the player sees
when you save position - 1*/
void tic_tac_toe::markboard(int position)
{
	pegs[position - 1] = next_player;
	tic_tac_toe::set_next_player();
}

void tic_tac_toe::display_board() const
{
	for (int i = 0; i < 9; i++)
	{
		std::cout << " " << pegs[i] << " ";

		if (i % 3 = 0)
		{
			std::cout << "\n";
		}
	}

}

string getplayer(" ")
{
	return next_player;
}

void tic_tac_toe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player - "X";
	}

}

bool tic_tac_toe::check_column_win()
{
	for (std::size_t i = 0; i < 3; i ++)
	{
		if(pegs[i] == pegs[i+3]  && pegs[i+3] == pegs[i+6] && pegs[i+6] != " ") 
		{
			return true;
		}

	}

	return false;
}

bool tic_tac_toe::check_row_win()
{
	for (std::size_t i = 0; i < 9; i= i+3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i + 2] != " ")
		{
			return true;
		}

	}

	return false;
}

bool tic_tac_toe::check_diagonal_win()
{
		if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ")
		{
			return true;
		}
		if (pegs[3] == pegs[5] && pegs[5] == pegs[7] && pegs[7] != " ")
		{
			return true;
		}

	return false;
}

void tic_tac_toe::clear_board()
{
	for (int i = 0; i <9; i ++)
	{
		pegs[i] = " ";
	}
}

bool tic_tac_toe::check_board_full()
{
	int insurence = 0;

	for (int i = 0; i < 9; i++)
	{
		if (pegs[i] != " ")
		{
			insurence ++;
		}
	}
	if (insurence == 9)
	{
		return true;
	}

	return false;
}
