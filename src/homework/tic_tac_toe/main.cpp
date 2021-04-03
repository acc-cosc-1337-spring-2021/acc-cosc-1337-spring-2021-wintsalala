#include <iostream>
#include <string>
#include <tic_tac_toe.h>

using std::string;
using std::cout;
using std::cin;

int main() 
{
	string first_player;
	cout << "Choose a player (X or O): ";
	cin >> first_player;
	while(first_player != "X" && first_player != "O")
	{
		cout << "Invalid input. Please enter X or O: ";
		cin >> first_player;
	}
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game(first_player);
	int position;
	while(true)
	{
		cout << "\nEnter a move for plater " + tic_tac_toe.get_player() + " ((1-9) : ";
		cin >> position;
		if(position >= 1 && position <= 9)
		{
			tic_tac_toe.mark_board(position);
			if(tic_tac_toe.game_over())
			{
				cout << "\nGame over\n";
				tic_tac_toe.display_board();
				break;
			}
		}
		else
		{
			cout<< "Please enter valid position value (1-9): ";
		}
		
	}
	return 0;
}