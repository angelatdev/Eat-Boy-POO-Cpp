#include "colisao.hpp"

int colisao(char heroi, char fantasma, std::vector<std::vector<char>>  &matriz){

    int l = matriz.size(), c = matriz[0].size(), existe_heroi = 0, existe_fantasma = 0;
    
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
        if (matriz[i][j] == heroi){
            existe_heroi = 1;
                }
            }
        }

    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
        if (matriz[i][j] == fantasma){
            existe_fantasma = 1;
                }
            }
        }

    if (!existe_heroi || !existe_fantasma){
        return 1;
    }else{
        return 0;
    }

}