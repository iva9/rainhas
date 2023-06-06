// Copyright[2023] <Ivanov M. Santos>
 #ifndef EIGHT_QUEENS_HPP
#define EIGHT_QUEENS_HPP

#include <vector>

/*bool isSafe(std::vector<int>& board, int row, int col);
bool resolveRainhas(std::vector<int>& board, int row);*/

bool esafe(const std::vector<int>& board, int row, int col);

bool resolveRainhas(std::vector<int>& board, int row);

int checkSolution(std::vector<int>& board);

#endif // EIGHT_QUEENS_HPP 