//h
#pragma once
#include <tic_tac_toe.h>

class TicTacToe3 : public TicTacToe
{
private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;

public:
    TicTacToe3() : TicTacToe(3) {}
    TicTacToe3(std::vector<string> p, string winner) : TicTacToe(p, winner) {}
};
