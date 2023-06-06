// Copyright[2023] <Ivanov M. Santos>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "rainhas.hpp"

TEST_CASE("Teste de solução válida das 8 damas") {
    std::vector<int> board = {
        0, 0, 0, 0, 1, 0, 0, 0,
        1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, 0, 0, 1, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 1, 0, 0, 0, 0
    };
    REQUIRE(checkSolution(board) == 1);
}

TEST_CASE("Teste de validação do tabuleiro inválido: solução inválida") {
    std::vector<int> board = {
        1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 1, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, 0, 0, 1, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0, 0, 0
    };
    getAttackingQueens(board);
    REQUIRE(checkSolution(board) == 0);
}

TEST_CASE("Teste de validação do tabuleiro inválido: tres na mesma coluna") {
    std::vector<int> board = {
        1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 1, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, 0, 0, 1, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0, 0, 0
    };
    getAttackingQueens(board);
    REQUIRE(checkSolution(board) == 0);
}

TEST_CASE("Teste de validação do tabuleiro inválido: mais um erro de diagonal") {
    std::vector<int> board = {
        1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 1, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, 0, 0, 1, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0, 0, 0
    };
    getAttackingQueens(board);
    REQUIRE(checkSolution(board) == 0);
}


TEST_CASE("Teste de solução inválida do tabuleiro ou rainhas") {
    std::vector<int> board = {
        1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 1, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, 0, 0, 1, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 1, 1, 0
    };

    REQUIRE(checkSolution(board) == -1);
}

TEST_CASE("Teste de solução inválida do tabuleiro ou rainhas, mas segunda tentativas") {
    std::vector<int> board = {
        1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 1, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, 0, 0, 1, 0, 0,
    
    };

    REQUIRE(checkSolution(board) == -1);
}
TEST_CASE("Teste de solução inválida do tabuleiro ou rainhas, mas segunda terceira") {
    std::vector<int> board = {
        1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 1, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, 0, 0, 1, 0, 0,
        0, 0,
    };

    REQUIRE(checkSolution(board) == -1);
}

