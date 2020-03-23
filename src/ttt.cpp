#include <iostream>
#include <vector>
#include "ttt_functions.hpp"

int main() {

  std::cout << "---------\n";
  std::cout << " Tic     \n";
  std::cout << "   Tac   \n";
  std::cout << "     Toe \n\n";

  std::vector<std::string> board(9);
  for(int i = 0; i < board.size(); i++) {
    if(i%2 == 0) {
      board[i] = "X";
    } else {
      board[i] = "O";
    }
  }

  draw(board);
  std::cout << "---------\n";
  std::cout << "\n";

  board = reset_board(board);
  draw(board);
  std::cout << "\n---------\n";

  int player_move;
  std::vector<int> list_of_moves;
  int count = 0;
  bool winner = false;

  while(winner != true and count < 9) {
    if(count%2 ==0) {
      std::cout << "\nPlayer 1\n";
      std::cout << "move: ";
      std::cin >> player_move;
      player_move= move_checker(player_move, list_of_moves);
      list_of_moves.push_back(player_move);
      board[player_move] = "X";
    } else {
      std::cout << "\nPlayer 2\n";
      std::cout << "move: ";
      std::cin >> player_move;
      player_move = move_checker(player_move, list_of_moves);
      list_of_moves.push_back(player_move);
      board[player_move] = "O";
    }

    std::cout << "\n";
    draw(board);
    std::cout << "\n---------\n";

    winner = win_condition(board, winner);
    count++;
    if(count==9 and winner!=true){
      std::cout << " Tie     \n";
      std::cout << "    Game \n";
      std::cout << "---------\n";
    }
  }
}
