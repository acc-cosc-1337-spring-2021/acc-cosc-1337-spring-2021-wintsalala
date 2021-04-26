//h
#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "tic_tac_toe.h"
#include <string.h>

using std::cout;
using std::string;
using std::vector;
using std::unique_ptr;
using std::move;

class TicTacToeManager
{
private:
    vector<unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);

public:
    void save_game(unique_ptr<TicTacToe>& b);
    void get_winner_total(int &o, int &x, int &t);
    friend ostream &operator<<(std::ostream &out, const TicTacToeManager &manager)
    {
        for (unsigned i = 0; i < manager.games.size(); i++)
        {
            cout << *move(manager.games[i]) << "\n";
        }

        return out;
    }
};
