//cpp
#include <string>
#include <vector>
#include "tic_tac_toe.h"
#include <iostream>

using std::vector;
using std::string;
using std::cout;

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
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(pegs[i][j] == ' ')
            {  
                return false;
            }
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
    int row = ( postion - 1 ) / 3;
    int column = (postion - 1 ) % 3;
    pegs[row][column] = player[0];
    set_next_player();
}

void TicTacToe::clear_board()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            pegs[i][j] = ' ';
        }
    }
}

void TicTacToe::display_board() const
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << pegs[i][j] << " ";
        }
        cout << "\n";
    }
}