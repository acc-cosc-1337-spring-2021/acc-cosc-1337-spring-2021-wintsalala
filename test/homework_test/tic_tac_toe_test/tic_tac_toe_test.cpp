#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <tic_tac_toe_manager.h>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Tic tac toe game")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == true);
	REQUIRE(tic_tac_toe.get_winner() == "C");
}

TEST_CASE("Test first player set to X")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	REQUIRE(tic_tac_toe.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");
	REQUIRE(tic_tac_toe.get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == true);
	REQUIRE(tic_tac_toe.get_winner() == "X");
}


TEST_CASE("Test win by second column")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == true);
}


TEST_CASE("Test win by third column")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win by first row")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == true);
}


TEST_CASE("Test win by second row")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == true);
}


TEST_CASE("Test win by third row")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
}


TEST_CASE("Test win diagonally from top left")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
}


TEST_CASE("Test win diagonally from bottom left")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test TicTacToe manager get winner total")
{
	TicTacToeManager game_manager;
	TicTacToe x_wins_game1;
	x_wins_game1.start_game("X");
	x_wins_game1.mark_board(7);
	REQUIRE(x_wins_game1.game_over() == false);
	x_wins_game1.mark_board(2);
	REQUIRE(x_wins_game1.game_over() == false);
	x_wins_game1.mark_board(5);
	REQUIRE(x_wins_game1.game_over() == false);
	x_wins_game1.mark_board(4);
	REQUIRE(x_wins_game1.game_over() == false);
	x_wins_game1.mark_board(3);
	REQUIRE(x_wins_game1.game_over() == true);
	game_manager.save_game(x_wins_game1);
	
	TicTacToe x_wins_game2;
	x_wins_game2.start_game("X");
	x_wins_game2.mark_board(7);
	REQUIRE(x_wins_game2.game_over() == false);
	x_wins_game2.mark_board(2);
	REQUIRE(x_wins_game2.game_over() == false);
	x_wins_game2.mark_board(5);
	REQUIRE(x_wins_game2.game_over() == false);
	x_wins_game2.mark_board(4);
	REQUIRE(x_wins_game2.game_over() == false);
	x_wins_game2.mark_board(3);
	REQUIRE(x_wins_game2.game_over() == true);
	game_manager.save_game(x_wins_game2);

	TicTacToe o_wins_game;
	o_wins_game.start_game("O");
	o_wins_game.mark_board(7);
	REQUIRE(o_wins_game.game_over() == false);
	o_wins_game.mark_board(2);
	REQUIRE(o_wins_game.game_over() == false);
	o_wins_game.mark_board(5);
	REQUIRE(o_wins_game.game_over() == false);
	o_wins_game.mark_board(4);
	REQUIRE(o_wins_game.game_over() == false);
	o_wins_game.mark_board(3);
	REQUIRE(o_wins_game.game_over() == true);
	game_manager.save_game(o_wins_game);

	TicTacToe tie_game;
	tie_game.start_game("X");
	tie_game.mark_board(2);
	REQUIRE(tie_game.game_over() == false);
	tie_game.mark_board(1);
	REQUIRE(tie_game.game_over() == false);
	tie_game.mark_board(4);
	REQUIRE(tie_game.game_over() == false);
	tie_game.mark_board(3);
	REQUIRE(tie_game.game_over() == false);
	tie_game.mark_board(5);
	REQUIRE(tie_game.game_over() == false);
	tie_game.mark_board(6);
	REQUIRE(tie_game.game_over() == false);
	tie_game.mark_board(9);
	REQUIRE(tie_game.game_over() == false);
	tie_game.mark_board(8);
	REQUIRE(tie_game.game_over() == false);
	tie_game.mark_board(7);
	REQUIRE(tie_game.game_over() == true);
	REQUIRE(tie_game.get_winner() == "C");
	game_manager.save_game(tie_game);

	int _wins, x_wins, ties;
	game_manager.get_winner_total(_wins, x_wins, ties);
	REQUIRE(x_wins == 2);
	REQUIRE(_wins == 1);
	REQUIRE(ties == 1);
}

