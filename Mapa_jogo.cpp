#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "Mapa_jogo.hpp"

//#include "eat_boy.hpp"

Mapa_jogo::Mapa_jogo() {
	resultado_jogo = 0;
}

void Mapa_jogo::aloca_mapa(std::string endereco){

    std::string linha;
    std::ifstream mapa(endereco);
    std::vector<char> aux;
    mapa >> this->nLinha;
    mapa >> this->nColuna;

    for (int i = 0; i < this->nLinha; i++){
        this->matriz.push_back(aux);
    }

    for (int i = 0; i < this->nLinha; i++){

    mapa >> linha;

    for (char c: linha){
        this->matriz[i].push_back(c);
        }
    }
}

char desenhoparede[4][7] = {
	{"......" },
	{"......" },
	{"......" },
	{"......" }
};

char desenhofantasma[4][7] = {
	{" .-.  " },
	{"| OO| " },
	{"|   | " },
	{"'^^^' " }
};

char desenhoheroi[4][7] = {
	{" .--. "  },
	{"/ _.-'"  },
	{"\\  '-." },
	{" '--' "  }
};

char desenhopilula[4][7] = {
	{"      "},
	{" .-.  "},
	{" '-'  "},
	{"      "}
};

char desenhovazio[4][7] = {
	{"      "},
	{"      "},
	{"      "},
	{"      "}
};

void imprimeparte(char desenho[4][7], int parte) {
	if(desenho == desenhoparede) {
		printf("%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219); //219
	} 
	else {
		printf("%s", desenho[parte]);
	}
}

void Mapa_jogo::imprime_mapa(){
//void imprime_mapa(){

    for(int i = 0; i < this->nLinha; i++) {

		for(int parte = 0; parte < 4; parte++) {
			for(int j = 0; j < this->nColuna; j++) {

				switch(this->matriz[i][j]){
					case '#':
						imprimeparte(desenhofantasma, parte);
						break;
					case 'c':
					case '@':
						imprimeparte(desenhoheroi, parte);
						break;
					case 'o':
						imprimeparte(desenhopilula, parte);
						break;
					case '-':
					case '|':
						imprimeparte(desenhoparede, parte);
						break;
					case '.':
						imprimeparte(desenhovazio, parte);
						break;
				}
				
			}
			printf("\n");
		}

	}

}

std::vector<std::vector<char>> Mapa_jogo::getMatriz(){
    return this->matriz;
}

bool Mapa_jogo::verifica_fim_de_jogo(){
	
	int cont_fantasma = 0;
	int cont_heroi = 0;
	
	for (int i = 0; i < this->nLinha; i++){
		for (int j = 0; j < this->nColuna; j++){
			if (this->matriz[i][j] == '@' || this->matriz[i][j] == 'c')
				cont_heroi++;
			if (this->matriz[i][j] == '#')
				cont_fantasma++;
		}
	}

	if (!cont_heroi)
		return true;
	if (!cont_fantasma)
		return true;
		
	return false;
}
