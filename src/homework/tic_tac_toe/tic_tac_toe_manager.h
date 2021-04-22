//h
#include <iostream>
#include <vector>
#include "tic_tac_toe.h"
#include <string.h>

using std::cout;
using std::string;
using std::vector;

class TicTacToeManager
{
private:
    vector<TicTacToe> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);

public:
    void save_game(TicTacToe b);
    void get_winner_total(int &o, int &x, int &t);
    friend ostream &operator<<(std::ostream &out, const TicTacToeManager &manager)
    {
        for (unsigned i = 0; i < manager.games.size(); i++)
        {
            cout << manager.games[i] << "\n";
        }

        return out;
    }
};
