#include "Mapa_jogo.hpp"
#include "Heroi.hpp"
#include "Fantasma.hpp"
#include "Pilula.hpp"
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    
    Mapa_jogo labirinto = Mapa_jogo();
    labirinto.aloca_mapa("mapas\\mapa_3.txt");

    Heroi eatboy = Heroi('c', 7, 13, &labirinto);
    Pilula pilula = Pilula('o', 5, 22, &labirinto);
    Fantasma fantasma_green  = Fantasma('#', 4, 8, &labirinto);
    Fantasma fantasma_red = Fantasma('#', 8, 5, &labirinto);
    Fantasma fantasma_yellow = Fantasma('#', 9, 25, &labirinto);

    labirinto.imprime_mapa();
    
    system("color 08");
    while(1 && eatboy.estou_vivo()) {
        

        eatboy.move(_getch());
        if(!eatboy.estou_vivo()) {
            labirinto.imprime_mapa();
            break;
        }
        
        fantasma_green.IA();
    
        fantasma_red.IA();
      
        fantasma_yellow.IA();
        
        labirinto.imprime_mapa();

        if (labirinto.verifica_fim_de_jogo())
            break;
    }

    if(eatboy.estou_vivo()){
        system("color 02");
        cout << "\nVOCE VENCEU! MEUS PARABENS! :D" << endl;}
        
    else{
        system("color 01");
        cout << "\nVOCE PERDEU! :( TENTE DE NOVO!" << endl;}
        
    return 0;

}

/*
0 - Preto
1 - Azul
2 - Verde
3 - Verde-�gua
4 - Vermelho
5 - Roxo
6 - Amarelo
7 - Branco
8 - Cinza
9 - Azul claro
A - Verde Claro
B - Verde-�gua claro
C - Vermelho Claro
D - Lil�s
E - Amarelo Claro
F - Branco Brilhante
*/