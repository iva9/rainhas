// Copyright[2023] <Ivanov M. Santos>
#include "rainhas.hpp"
#include <iostream>
#include <vector>
using namespace std;

bool esafe(vector<int>& board, int row, int col) {

    for (int i = 0; i < row; i++) {
        if (board[i] == col)
            return false;
    }

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i] == j)
            return false;
    }


    for (int i = row, j = col; i >= 0 && j < 8; i--, j++) {
        if (board[i] == j)
            return false;
    }

    for (int j = 0; j < 8; j++) {
        if (j != col && board[row * 8+ j])
            return false;
    }

    return true;
}

bool resolveRainhas(vector<int>& board, int row = 0) {
   
    if (row == 8)
        return true;

    for (int col = 0; col < 8; col++) {
      
        if (esafe(board, row, col)) {
        
            board[row] = col;

         
            if (resolveRainhas(board, row + 1))
                return true;

        
            board[row] = -1;
        }
    }


    return false;
}

int checkSolution(std::vector<int>& board) {

    if (board.size() != 64) {
        return -1; 
    }


    int count = 0;
   
    for(int i=0; i < board.size(); i++){
        if (board[i] == 1){
            count++;
        }
    }

    if(count != 8){
        return -1;
    }
    

    return resolveRainhas(board)?1:0;
}
