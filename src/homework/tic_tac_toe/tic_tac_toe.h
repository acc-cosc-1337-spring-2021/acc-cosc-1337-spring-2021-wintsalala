#include <string>
#include <vector>
using std::vector;
using std::string;

class TicTacToe
{
    private:
        string player;
        vector<string> pegs = {"   ", "   ", "   "};
        void set_next_player();
        bool check_board_full();
        void clear_board();  
    public:
        bool game_over() { return check_board_full(); } 
        void start_game(string first_player);
        void mark_board(int position);
        string get_player()const{ return player; }
        void display_board()const;
};
