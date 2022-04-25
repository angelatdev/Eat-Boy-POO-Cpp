#pragma once

#include <vector>
#include <string>
#include <iostream>

class Mapa_jogo {
public:
    std::vector<std::vector<char>> matriz;
    int nLinha;
    int nColuna;
    int resultado_jogo;

    Mapa_jogo();
    void aloca_mapa(std::string endereco);
    void imprime_mapa();
    std::vector<std::vector<char>> getMatriz();
    bool verifica_fim_de_jogo();
    void fim_de_jogo();
};
