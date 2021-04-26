#include <iostream>
#include <string>
#include <memory>
#include <tic_tac_toe_manager.h>
#include <tic_tac_toe_3.h>
#include <tic_tac_toe_4.h>

using std::cin;
using std::cout;
using std::make_unique;
using std::move;
using std::string;

int main()
{
	TicTacToeManager tic_tac_toe_manager;
	while (true)
	{
		int type_of_board;
		cout << "Choose type of board (3 for 3x3 or 4 for 4x4): ";
		cin >> type_of_board;
		while (type_of_board != 3 && type_of_board != 4)
		{
			cout << "Invalid input. Please enter 3 or 4: ";
			cin >> type_of_board;
		}
		string first_player;
		cout << "Choose a player (X or O): ";
		cin >> first_player;
		while (first_player != "X" && first_player != "O")
		{
			cout << "Invalid input. Please enter X or O: ";
			cin >> first_player;
		}
		unique_ptr<TicTacToe> game;
		if (type_of_board == 3)
		{
			TicTacToe3 t3;
			game = make_unique<TicTacToe3>(t3);
		}
		else
		{
			TicTacToe4 t4;
			game = make_unique<TicTacToe4>(t4);
		}

		game->start_game(first_player);
		while (true)
		{
			cin >> *game;
			cout << *game;
			if (game->game_over())
			{
				cout << "\nGame over. Result: " << game->get_winner();
				;
				cout << "\n(X = X wins, O means O wins, and C means game tied.";
				tic_tac_toe_manager.save_game(game);
				break;
			}
		}
		int o = 0, x = 0, t = 0;

		tic_tac_toe_manager.get_winner_total(o, x, t);
		cout << "\n\nX wins " << x << ", O wins " << o << ", Ties " << t << "\n";
		string choice;
		cout << "\nDo you want to play another game? (Y/N)?";
		cin >> choice;
		if (choice == "n" || choice == "N")
		{
			break;
		}
	}

	cout << "Below are the games played so far. \n"
		 << tic_tac_toe_manager;
	return 0;
}