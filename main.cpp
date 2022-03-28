#include <cstdio> 
#include <vector> 
#include <iostream> 
#include <fstream> 
#include <ctime>

#include "aloca_mapa.hpp"
#include "imprime_mapa.hpp"
#include "move.hpp"
#include "ia_fantasma.hpp"
#include "colisao.hpp"

using namespace std;

int main () {
  
  vector<vector<char>> matriz;
  char direcao;

  matriz = aloca_mapa(matriz, "mapas/mapa_2.txt");
  cout << "\nEAT-BOY V0.0.1\n" << endl;
  imprime_mapa(matriz);

  while(true){
    
    cout << "Direcao: ";
    cin >> direcao;
    cout << endl;

    move(direcao, '@' , matriz);
   
    ia_fantasma(matriz);

    if (colisao('@', '#', matriz)){
      break;
    }

    imprime_mapa(matriz);
    cout << "================" << endl;

  }

  imprime_mapa(matriz);

  cout << "JOGO ENCERRADO!" << endl;

  return 0;
  
}
