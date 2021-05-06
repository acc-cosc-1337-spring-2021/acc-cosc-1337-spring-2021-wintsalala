//h
#pragma once
#include <vector>
#include <memory>
#include <tic_tac_toe.h>
#include <string>

class TicTacToeData
{
private:
    string game_file_name = "games.txt";
public:
    void save_games(const std::vector<std::unique_ptr<TicTacToe>> &games);
    std::vector<std::unique_ptr<TicTacToe>> get_games();
};
