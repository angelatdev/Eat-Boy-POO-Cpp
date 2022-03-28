#include "imprime_mapa.hpp"
#include <iostream>

void imprime_mapa(std::vector<std::vector<char>> &matriz){
  
    int l = matriz.size(), c = matriz[0].size();
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
        std::cout << matriz[i][j];
        }
    std::cout << std::endl;
    }
}