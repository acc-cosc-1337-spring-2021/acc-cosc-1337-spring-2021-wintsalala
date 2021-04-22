#include <string>
#include <vector>
#include <iostream>
using std::cout;
using std::istream;
using std::ostream;
using std::string;
using std::vector;

class TicTacToe
{
private:
    string winner;
    string player;
    vector<string> pegs = {"", "", "", "", "", "", "", "", ""};
    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
public:
    string get_winner()const{ return winner;}
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const{ return player; }
    friend ostream &operator<<(ostream &out, const TicTacToe &game)
    {
        out << "\n*************";
        for (int i = 0; i < 3; i++)
        {
            out << "\n| ";
            for (int j = 0; j < 3; j++)
            {
                out << (game.pegs[i * 3 + j] == "" ? " " : game.pegs[i * 3 + j]) << " | ";
            }
            out << "\n*************";
        }

        return out;
    }

    friend istream &operator>>(istream &input, TicTacToe &game)
    {
        int position;
        cout << "\nEnter a move for plater " + game.get_player() + " (1-9): ";
        input >> position;
        if (position >= 1 && position <= 9)
        {
            game.mark_board(position);
        }
        else
        {
            cout << "Please enter valid position value (1-9): ";
        }

        return input;
    }
};
