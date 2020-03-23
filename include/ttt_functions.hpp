#include <vector>

void draw(std::vector<std::string> board);

std::vector<std::string> reset_board(std::vector<std::string> board);

bool win_condition(std::vector<std::string> board, bool winner);

void winner_winner();

int move_checker(int val, std::vector<int> list_of_moves);

bool element_of(int val, std::vector<int> list_of_vals);
