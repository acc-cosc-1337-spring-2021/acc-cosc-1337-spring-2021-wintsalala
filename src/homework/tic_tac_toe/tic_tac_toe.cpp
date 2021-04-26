//cpp
#include <string>
#include <vector>
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;
using std::string;
using std::vector;

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

bool TicTacToe::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
    
 
    return false;
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for (unsigned i = 0; i < pegs.size(); i++)
    {
        if (pegs[i] == "")
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int postion)
{
    if (pegs[postion - 1] == "")
    {
        pegs[postion - 1] = player;
        set_next_player();
    }
    else
    {
        cout << "\n Illegal move. Position already played.";
    }
}

void TicTacToe::clear_board()
{
    for (unsigned i = 0; i < pegs.size(); i++)
    {
        pegs[i] = "";
    }
}