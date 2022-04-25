#pragma once

#include <vector>
#include "Mapa_jogo.hpp"

class Personagem {
protected:
    Mapa_jogo *mapa;
    int posicao_x;
    int posicao_y;
    char simbolo;
    bool vivo = true;

public:
    Personagem(char simb, int pos_x, int pos_y, Mapa_jogo *labirinto);
    virtual void move(char comando) = 0;
    bool estou_vivo();
};


