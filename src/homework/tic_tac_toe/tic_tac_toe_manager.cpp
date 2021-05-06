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

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
}

TicTacToeManager::TicTacToeManager(TicTacToeData tic_tac_toe_data)
{
    data = tic_tac_toe_data;
    games = data.get_games();
}

TicTacToeManager::~TicTacToeManager()
{
    data.save_games(games);
}