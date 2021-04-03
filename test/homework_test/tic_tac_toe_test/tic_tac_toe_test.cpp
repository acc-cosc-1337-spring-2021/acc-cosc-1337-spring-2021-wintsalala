#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <tic_tac_toe.h>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Tic tac toe game")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(3);
	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(5);
	tic_tac_toe.mark_board(6);
	tic_tac_toe.mark_board(7);
	tic_tac_toe.mark_board(8);
	tic_tac_toe.mark_board(9);

	REQUIRE(tic_tac_toe.game_over() == true);
}

