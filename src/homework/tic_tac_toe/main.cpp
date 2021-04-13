#include <iostream>
#include <string>
#include <tic_tac_toe.h>

using std::string;
using std::cout;
using std::cin;

int main() 
{
	while (true)
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
			cout << "\nEnter a move for plater " + tic_tac_toe.get_player() + " (1-9) or -1 to exit: ";
			cin >> position;
			if(position == -1)
			{
				break;
			}
			if(position >= 1 && position <= 9)
			{
				tic_tac_toe.mark_board(position);
				
				tic_tac_toe.display_board();
				if(tic_tac_toe.game_over())
				{
					cout << "\nGame over. Result: " << tic_tac_toe.get_winner();
					cout << "\n(X = X wins, O means O wins, and C means game tied.";
					break;
				}
			}
			else
			{
				cout<< "Please enter valid position value (1-9): ";
			}
		}
	
		string choice;
		cout << "\nDo you want to play another game? (Y/N)?";
		cin >> choice;
		if(choice == "n" || choice == "N")
		{
			break;
		}
	}
	return 0;
}