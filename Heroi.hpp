#pragma once

#include "Personagem.hpp"

class Heroi: public Personagem {
public:
    int status = 0;
    Heroi(char simb, int pos_x, int pos_y, Mapa_jogo *labirinto);
    void move(char direcao) override;
    int tem_fantasma(char objeto, int status);
    void tem_pilula(char objeto);
    void poder();
};



