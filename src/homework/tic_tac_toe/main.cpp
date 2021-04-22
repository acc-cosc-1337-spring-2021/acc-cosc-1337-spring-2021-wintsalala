#include <iostream>
#include <string>
#include <tic_tac_toe_manager.h>

using std::cin;
using std::cout;
using std::string;

int main()
{
	TicTacToeManager tic_tac_toe_manager;
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
		while (true)
		{
			cin >> tic_tac_toe;
			cout << tic_tac_toe;
			if (tic_tac_toe.game_over())
			{
				tic_tac_toe_manager.save_game(tic_tac_toe);
				cout << "\nGame over. Result: " << tic_tac_toe.get_winner();
				cout << "\n(X = X wins, O means O wins, and C means game tied.";
				break;
			}
		}
		int o = 0, x = 0, t = 0;

		tic_tac_toe_manager.get_winner_total(o, x, t);
		cout << "\n\nX wins " << x << ", O wins " << o << ", Ties " << t << "\n";
		string choice;
		cout << "\nDo you want to play another game? (Y/N)?";
		cin >> choice;
		if(choice == "n" || choice == "N")
		{
			break;
		}
	}

	cout << "Below are the games played so far. \n"
		 << tic_tac_toe_manager;
	return 0;
}