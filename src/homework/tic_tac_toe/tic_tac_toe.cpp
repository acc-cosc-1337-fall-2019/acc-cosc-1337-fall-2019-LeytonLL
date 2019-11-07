//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
	if (check_column_win() || check_diagonal_win() || 
		check_row_win())
	{
		TicTacToe::set_winner();
		return true;
	}
	else if (check_board_full())
	{
		winner = "C";
		return true;
	}else
	
		return false;
}

void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}

/* Remember position is what the player sees
when you save position - 1*/
void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
	

	}

string TicTacToe::get_player()const
{
	return next_player;
}

string TicTacToe::get_winner() const
{
	return winner;
}

void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}

}

bool TicTacToe::check_column_win()
{
	return false;
}

bool TicTacToe::check_row_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	return false;
}

void TicTacToe::clear_board()
{
	for (int i = 0; i <9; i ++)
	{
		pegs[i] = " ";
	}
}

bool TicTacToe::check_board_full()
{
	for (int i = 0; i < 9; i++)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}

	return true;
}

void TicTacToe::set_winner()
{
	if (next_player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
}

std::istream& operator>>(std::istream& in, TicTacToe & t) //also sets next player
{
	int position = 0;

	while (position < 1 || position > t.pegs.size())
	{
		cout << "Enter position from 1 to "<<t.pegs.size()<<"\n";
		in >> position;
	}

	t.mark_board(position);

	return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& t)
{
	for (std::size_t i = 0; i < t.pegs.size(); i += sqrt(t.pegs.size()))
	{
		out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2];

		if (t.pegs.size() == 16)
		{
			out << "|" << t.pegs[i + 3];
		}

		out << "\n";
	}

	return out;
}


const std::vector<std::string>&TicTacToe::get_pegs()
{
	return pegs; 
}