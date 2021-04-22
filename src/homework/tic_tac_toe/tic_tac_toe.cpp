//cpp
#include <string>
#include <vector>
#include "tic_tac_toe.h"
#include <iostream>

using std::vector;
using std::string;
using std::cout;

bool TicTacToe::check_column_win()
{
    if(pegs[0] != "" && (pegs[0] == pegs[3]) && (pegs[3] == pegs[6]))
    {
        return true;
    }
    if(pegs[1] != "" && (pegs[1] == pegs[4]) && (pegs[4] == pegs[7]))
    {
        return true;
    }
    if(pegs[2] != "" && (pegs[2] == pegs[5]) && (pegs[5] == pegs[8]))
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    if(pegs[0] != "" && (pegs[0] == pegs[1]) && (pegs[1] == pegs[2]))
    {
        return true;
    }
    if(pegs[3] != "" && (pegs[3] == pegs[4]) && (pegs[4] == pegs[5]))
    {
        return true;
    }
    if(pegs[6] != "" && (pegs[6] == pegs[7]) && (pegs[7] == pegs[8]))
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] != "" && (pegs[0] == pegs[4]) && (pegs[4] == pegs[8]))
    {
        return true;
    }
    if(pegs[2] != "" && (pegs[2] == pegs[4]) && (pegs[4] == pegs[6]))
    {
        return true;
    }
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
    for(int i = 0; i < 9; i++)
    {
        if(pegs[i] == "")
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
    if(pegs[postion - 1] == "")
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
    for(int i = 0; i < 3; i++)
    {
        pegs[i] = "";
    }
}