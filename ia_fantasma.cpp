#include "ia_fantasma.hpp"
#include "move.hpp"
#include <stdlib.h>
#include <time.h> 

void ia_fantasma(std::vector<std::vector<char>>&matriz){
    
    int fantasma_x = -1, fantasma_y = -1;

    int linha = matriz.size(), coluna = matriz[0].size();

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            if (matriz[i][j] == '#'){
                fantasma_x = i;
                fantasma_y = j;
            }
        }
    }

    srand((unsigned) time(0));
    int maior = 4;
    int menor = 1;
        
    int direcao = rand() % ( maior - menor + 1 ) + menor; 

    switch (direcao)
    {
    case 1:

        move('w', '#', matriz); 
        break;
    case 2:
        move('d', '#', matriz); 
        break;
    case 3:
        move('s', '#', matriz); 
        break;
    case 4:
        move('a', '#', matriz); 
        break;
     
    default:
        break;
    }      
    
}
