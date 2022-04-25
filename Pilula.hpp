#pragma once

#include "Mapa_jogo.hpp"

class Pilula {
public:
    Mapa_jogo *mapa;
    int posicao_x;
    int posicao_y;
    char simbolo; // o ou *
    Pilula(char simb, int pos_x, int pos_y, Mapa_jogo *labirinto);
};


