#include "Pilula.hpp"

Pilula::Pilula(char simb, int pos_x, int pos_y, Mapa_jogo *labirinto){
        mapa = labirinto;
        posicao_x = pos_x; 
        posicao_y = pos_y; 
        simbolo = simb;

        mapa->matriz[posicao_x][posicao_y] = simb;
}
