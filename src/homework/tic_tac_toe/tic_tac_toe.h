#include <string>
#include <vector>
using std::vector;
using std::string;

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
        void display_board()const;
};
