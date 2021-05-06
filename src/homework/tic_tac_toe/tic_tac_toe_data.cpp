//cpp
#include <vector>
#include <memory>
#include <fstream>
#include <tic_tac_toe.h>
#include <tic_tac_toe_3.h>
#include <tic_tac_toe_4.h>
#include <tic_tac_toe_data.h>

using std::fstream;
using std::ios;

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>> &games)
{
    fstream write_file;
    write_file.open(game_file_name);
    for (unsigned j = 0; j < games.size(); j++)
    {
        vector<string> pegs = games[j].get()->get_pegs();
        string winner = games[j].get()->get_winner();
        for (unsigned i = 0; i < pegs.size(); i++)
        {
            write_file << pegs[i];
        }
        write_file << winner;
        write_file.put('\n');
    }
    write_file.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<std::unique_ptr<TicTacToe>> boards;
    fstream read_file;
    read_file.open(game_file_name);
    string line;
    while (getline(read_file, line))
    {
        vector<string> pegs;
        string winner;
        for (unsigned i = 0; i < line.size(); i++)
        {
            if (i == line.size() - 1)
            {
                winner = string(1, line[i]);
            }
            else
            {
                pegs.push_back(string(1, line[i]));
            }
        }
        std::unique_ptr<TicTacToe> board;
        if (pegs.size() == 9)
        {
            board = std::make_unique<TicTacToe3>(TicTacToe3(pegs, winner));
            boards.push_back(std::move(board));
        }
        else if (pegs.size() == 16)
        {
            board = std::make_unique<TicTacToe4>(TicTacToe4(pegs, winner));
            boards.push_back(std::move(board));
        }
    }
    read_file.close();

    return boards;
}