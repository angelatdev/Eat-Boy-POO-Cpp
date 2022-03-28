#include <fstream>
#include <string.h>
#include "aloca_mapa.hpp"

std::vector<std::vector<char>> aloca_mapa(std::vector<std::vector<char>> &matriz, std::string endereco){
    
    int l, c;
    std::string linha;
    std::ifstream mapa(endereco);
    std::vector<char> aux;
    mapa >> l;
    mapa >> c;

    for (int i = 0; i < l; i++){
        matriz.push_back(aux);
    }

    for (int i = 0; i < l; i++){

    mapa >> linha;

    for (char c: linha){
        matriz[i].push_back(c);
        }
  
    }
    return matriz;
}