#include <iostream>
#include <vector>

void draw(std::vector<std::string> board) {
  std::cout << "  " << board[0] << " " << board[1] << " " << board[2] << "\n";
  std::cout << "  " << board[3] << " " << board[4] << " " << board[5] << "\n";
  std::cout << "  " << board[6] << " " << board[7] << " " << board[8] << "\n";
}

std::vector<std::string> reset_board(std::vector<std::string> board) {
  for(int i = 0; i < board.size(); i++) {
    board[i] = "*";
  }
  return board;
}

void winner_winner() {
  std::cout << " Winner  \n";
  std::cout << " Winner  \n";
  std::cout << "  Chicken\n";
  std::cout << "  Dinner!\n";
  std::cout << "---------\n";
}

bool win_condition(std::vector<std::string> board, bool winner){
  if((board[0]=="X" and board[1]=="X" and board[2]=="X") or (board[0]=="O" and board[1]=="O" and board[2]=="O")){
    winner_winner();
    winner = true;
  } else if((board[3]=="X" and board[4]=="X" and board[5]=="X") or (board[3]=="O" and board[4]=="O" and board[5]=="O")){
    winner_winner();
    winner = true;
  } else if((board[6]=="X" and board[7]=="X" and board[8]=="X") or (board[6]=="O" and board[7]=="O" and board[8]=="O")){
    winner_winner();
  } else if((board[0]=="X" and board[3]=="X" and board[6]=="X") or (board[0]=="O" and board[3]=="O" and board[6]=="O")){
    winner_winner();
    winner = true;
  } else if((board[1]=="X" and board[4]=="X" and board[7]=="X") or (board[1]=="O" and board[4]=="O" and board[7]=="O")){
    winner_winner();
    winner = true;
  } else if((board[2]=="X" and board[5]=="X" and board[8]=="X") or (board[2]=="O" and board[5]=="O" and board[8]=="O")){
    winner_winner();
    winner = true;
  } else if((board[0]=="X" and board[4]=="X" and board[8]=="X") or (board[0]=="O" and board[4]=="O" and board[8]=="O")){
    winner_winner();
    winner = true;
  } else if((board[2]=="X" and board[4]=="X" and board[6]=="X") or (board[2]=="O" and board[4]=="O" and board[6]=="O")){
    winner_winner();
    winner = true;
  } else {
    winner = false;
  }
  return winner;
}

bool element_of(int val, std::vector<int> list_of_vals){
  for(int i =0; i < list_of_vals.size(); i++)
    if(val == list_of_vals[i]){
      return true;
    }
    return false;
}

int move_checker(int move, std::vector<int> list_of_moves){
  bool checker = false;
  while(checker==false){
    if(move<0 or move>8 or element_of(move, list_of_moves)){
      std::cout << "\nInvalid move.\n";
      std::cout << "Try again: ";
      std::cin >> move;
    } else{
      checker = true;
    }
  }
  return move;
}
