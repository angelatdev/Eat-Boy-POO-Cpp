#include <iostream>
#include <vector>
#include "Personagem.hpp"

#include <cctype> //Para usar o Upper ou Lower Case

Personagem::Personagem(char simb, int pos_x, int pos_y, Mapa_jogo *labirinto){
        mapa = labirinto;
        posicao_x = pos_x; // 3
        posicao_y = pos_y; // 3
        simbolo = simb;

        mapa->matriz[posicao_x][posicao_y] = simb;
}

bool Personagem::estou_vivo() {
    return (mapa->matriz[posicao_x][posicao_y] == simbolo);
}



