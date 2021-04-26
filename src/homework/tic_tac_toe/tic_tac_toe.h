#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <math.h>
using std::cout;
using std::istream;
using std::ostream;
using std::string;
using std::vector;

class TicTacToe
{
protected:
    vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

private:
    string winner;
    string player;
    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();

public:
    TicTacToe(int size) : pegs(size * size, " ") {}
    string get_winner() const { return winner; }
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const { return player; }
    friend ostream &operator<<(ostream &out, const TicTacToe &game)
    {
        int game_width = sqrt(game.pegs.size());
        out << "\n";
        for (int i = 0; i <= 4 * game_width; i++)
        {
            out << "*";
        }
        for (int i = 0; i < game_width; i++)
        {
            out << "\n| ";
            for (int j = 0; j < game_width; j++)
            {
                out << (game.pegs[i * game_width + j] == "" ? " " : game.pegs[i * game_width + j]) << " | ";
            }

            out << "\n";
            for (int i = 0; i <= 4 * game_width; i++)
            {
                out << "*";
            }
        }

        return out;
    }

    friend istream &operator>>(istream &input, TicTacToe &game)
    {
        int game_size = game.pegs.size();
        int position;
        cout << "\nEnter a move for plater " + game.get_player() + " (1-" << game_size << "): ";
        input >> position;
        if (position >= 1 && position <= game_size)
        {
            game.mark_board(position);
        }
        else
        {
            cout << "Please enter valid position value (1-" << game_size << ").";
        }

        return input;
    }
};
