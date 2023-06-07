/**
* @file rainhas.cpp
*/

/// @file eight_queens.hpp
/// @brief Arquivo de cabeçalho para a solução do problema das Oito Rainhas.

#ifndef EIGHT_QUEENS_HPP
#define EIGHT_QUEENS_HPP

#include <vector>
#include <fstream>
#include <string>

/// 
/// @brief Verifica se a posição (row, col) é segura para colocar uma rainha.
/// @param board O estado atual do tabuleiro de xadrez.
/// @param row O índice da linha da posição a ser verificada.
/// @param col O índice da coluna da posição a ser verificada.
/// @return True se a posição for segura, False caso contrário.

bool esafe(const std::vector<int>& board, int row, int col);


/// @brief Resolve o problema das Oito Rainhas de forma recursiva.
/// @param board O estado atual do tabuleiro de xadrez.
/// @param row A linha atual em processamento.
/// @return True se uma solução for encontrada, False caso contrário.

bool resolveRainhas(std::vector<int>& board, int row);


/// @brief Identifica e exporta as rainhas que se atacam para um arquivo.
/// @param board O estado atual do tabuleiro de xadrez.

void getAttackingQueens(const std::vector<int>& board);


/// @brief Verifica se o tabuleiro de xadrez contém uma solução válida para o problema das Oito Rainhas.
/// @param board O estado atual do tabuleiro de xadrez.
/// @return 1 se o tabuleiro contém uma solução válida, 0 caso contrário.

int checkSolution(std::vector<int>& board);
#endif // EIGHT_QUEENS_HPP