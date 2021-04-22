//cpp
#include <tic_tac_toe_manager.h>
#include <string.h>

using std::string;

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}

void TicTacToeManager::get_winner_total(int &o, int &x, int &t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}