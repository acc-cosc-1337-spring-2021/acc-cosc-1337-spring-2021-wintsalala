#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <memory>
#include <tic_tac_toe_manager.h>
#include <tic_tac_toe_3.h>
#include <tic_tac_toe_4.h>

using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

//Tests for TicTacToe3
TEST_CASE("Tic tac toe game")
{
	TicTacToe3 tic_tac_toe;
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
	TicTacToe3 tic_tac_toe;
	tic_tac_toe.start_game("X");
	REQUIRE(tic_tac_toe.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe3 tic_tac_toe;
	tic_tac_toe.start_game("O");
	REQUIRE(tic_tac_toe.get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	TicTacToe3 tic_tac_toe;
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
	TicTacToe3 tic_tac_toe;
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
	TicTacToe3 tic_tac_toe;
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
	TicTacToe3 tic_tac_toe;
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
	TicTacToe3 tic_tac_toe;
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
	TicTacToe3 tic_tac_toe;
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
	TicTacToe3 tic_tac_toe;
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
	TicTacToe3 tic_tac_toe;
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
	TicTacToe3 x_wins_game1_t3;
	unique_ptr<TicTacToe> x_wins_game1 = make_unique<TicTacToe3>(x_wins_game1_t3);
	x_wins_game1->start_game("X");
	x_wins_game1->mark_board(7);
	REQUIRE(x_wins_game1->game_over() == false);
	x_wins_game1->mark_board(2);
	REQUIRE(x_wins_game1->game_over() == false);
	x_wins_game1->mark_board(5);
	REQUIRE(x_wins_game1->game_over() == false);
	x_wins_game1->mark_board(4);
	REQUIRE(x_wins_game1->game_over() == false);
	x_wins_game1->mark_board(3);
	REQUIRE(x_wins_game1->game_over() == true);
	game_manager.save_game(x_wins_game1);

	TicTacToe3 x_wins_game2_t3;
	unique_ptr<TicTacToe> x_wins_game2 = make_unique<TicTacToe3>(x_wins_game2_t3);
	x_wins_game2->start_game("X");
	x_wins_game2->mark_board(7);
	REQUIRE(x_wins_game2->game_over() == false);
	x_wins_game2->mark_board(2);
	REQUIRE(x_wins_game2->game_over() == false);
	x_wins_game2->mark_board(5);
	REQUIRE(x_wins_game2->game_over() == false);
	x_wins_game2->mark_board(4);
	REQUIRE(x_wins_game2->game_over() == false);
	x_wins_game2->mark_board(3);
	REQUIRE(x_wins_game2->game_over() == true);
	game_manager.save_game(x_wins_game2);

	TicTacToe3 o_wins_game_t3;
	unique_ptr<TicTacToe> o_wins_game = make_unique<TicTacToe3>(o_wins_game_t3);
	o_wins_game->start_game("O");
	o_wins_game->mark_board(7);
	REQUIRE(o_wins_game->game_over() == false);
	o_wins_game->mark_board(2);
	REQUIRE(o_wins_game->game_over() == false);
	o_wins_game->mark_board(5);
	REQUIRE(o_wins_game->game_over() == false);
	o_wins_game->mark_board(4);
	REQUIRE(o_wins_game->game_over() == false);
	o_wins_game->mark_board(3);
	REQUIRE(o_wins_game->game_over() == true);
	game_manager.save_game(o_wins_game);

	TicTacToe3 tie_game_t3;
	unique_ptr<TicTacToe> tie_game = make_unique<TicTacToe3>(tie_game_t3);
	tie_game->start_game("X");
	tie_game->mark_board(2);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(1);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(4);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(3);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(5);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(6);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(9);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(8);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(7);
	REQUIRE(tie_game->game_over() == true);
	REQUIRE(tie_game->get_winner() == "C");
	game_manager.save_game(tie_game);

	int o_wins, x_wins, ties;
	game_manager.get_winner_total(o_wins, x_wins, ties);
	REQUIRE(x_wins == 2);
	REQUIRE(o_wins == 1);
	REQUIRE(ties == 1);
}

//Tests for TicTacToe4
TEST_CASE("Tic tac toe game 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(13);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(10);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(14);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(11);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(15);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(16);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(12);
	REQUIRE(tic_tac_toe.game_over() == true);
	REQUIRE(tic_tac_toe.get_winner() == "C");
}

TEST_CASE("Test first player set to X 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("X");
	REQUIRE(tic_tac_toe.get_player() == "X");
}

TEST_CASE("Test first player set to O 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("O");
	REQUIRE(tic_tac_toe.get_player() == "O");
}

TEST_CASE("Test win by first column 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(12);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(13);
	REQUIRE(tic_tac_toe.game_over() == true);
	REQUIRE(tic_tac_toe.get_winner() == "X");
}

TEST_CASE("Test win by second column 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(10);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(13);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(14);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win by third column 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(10);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(11);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(16);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(15);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win by fourth column 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(10);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(12);
	tic_tac_toe.mark_board(15);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(16);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win by first row 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(15);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(16);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win by second row 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(13);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win by third row 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(10);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(11);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(14);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(12);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win by fourth row 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(13);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(14);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(15);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(12);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(16);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win diagonally from top left 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(11);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(16);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left 4")
{
	TicTacToe4 tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(14);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(10);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(13);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test TicTacToe manager get winner total 4")
{
	TicTacToeManager game_manager;
	TicTacToe4 x_wins_game1_t4;
	unique_ptr<TicTacToe> x_wins_game1 = make_unique<TicTacToe4>(x_wins_game1_t4);
	x_wins_game1->start_game("X");
	x_wins_game1->mark_board(1);
	REQUIRE(x_wins_game1->game_over() == false);
	x_wins_game1->mark_board(5);
	REQUIRE(x_wins_game1->game_over() == false);
	x_wins_game1->mark_board(2);
	REQUIRE(x_wins_game1->game_over() == false);
	x_wins_game1->mark_board(15);
	REQUIRE(x_wins_game1->game_over() == false);
	x_wins_game1->mark_board(3);
	REQUIRE(x_wins_game1->game_over() == false);
	x_wins_game1->mark_board(16);
	REQUIRE(x_wins_game1->game_over() == false);
	x_wins_game1->mark_board(4);
	REQUIRE(x_wins_game1->game_over() == true);
	game_manager.save_game(x_wins_game1);

	TicTacToe4 x_wins_game2_t4;
	unique_ptr<TicTacToe> x_wins_game2 = make_unique<TicTacToe4>(x_wins_game2_t4);
	x_wins_game2->start_game("X");
	x_wins_game2->mark_board(3);
	REQUIRE(x_wins_game2->game_over() == false);
	x_wins_game2->mark_board(2);
	REQUIRE(x_wins_game2->game_over() == false);
	x_wins_game2->mark_board(7);
	REQUIRE(x_wins_game2->game_over() == false);
	x_wins_game2->mark_board(10);
	REQUIRE(x_wins_game2->game_over() == false);
	x_wins_game2->mark_board(11);
	REQUIRE(x_wins_game2->game_over() == false);
	x_wins_game2->mark_board(16);
	REQUIRE(x_wins_game2->game_over() == false);
	x_wins_game2->mark_board(15);
	REQUIRE(x_wins_game2->game_over() == true);
	game_manager.save_game(x_wins_game2);

	TicTacToe4 o_wins_game_t4;
	unique_ptr<TicTacToe> o_wins_game = make_unique<TicTacToe4>(o_wins_game_t4);
	o_wins_game->start_game("O");
	o_wins_game->mark_board(4);
	REQUIRE(o_wins_game->game_over() == false);
	o_wins_game->mark_board(14);
	REQUIRE(o_wins_game->game_over() == false);
	o_wins_game->mark_board(7);
	REQUIRE(o_wins_game->game_over() == false);
	o_wins_game->mark_board(3);
	REQUIRE(o_wins_game->game_over() == false);
	o_wins_game->mark_board(10);
	REQUIRE(o_wins_game->game_over() == false);
	o_wins_game->mark_board(2);
	REQUIRE(o_wins_game->game_over() == false);
	o_wins_game->mark_board(13);
	REQUIRE(o_wins_game->game_over() == true);
	game_manager.save_game(o_wins_game);

	TicTacToe4 tie_game_t4;
	unique_ptr<TicTacToe> tie_game = make_unique<TicTacToe4>(tie_game_t4);
	tie_game->start_game("X");
	tie_game->mark_board(1);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(5);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(2);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(6);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(3);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(7);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(8);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(4);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(9);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(13);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(10);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(14);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(11);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(15);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(16);
	REQUIRE(tie_game->game_over() == false);
	tie_game->mark_board(12);
	REQUIRE(tie_game->game_over() == true);
	game_manager.save_game(tie_game);

	int o_wins, x_wins, ties;
	game_manager.get_winner_total(o_wins, x_wins, ties);
	REQUIRE(x_wins == 2);
	REQUIRE(o_wins == 1);
	REQUIRE(ties == 1);
}

