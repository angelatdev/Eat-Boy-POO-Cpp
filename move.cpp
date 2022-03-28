#include "move.hpp"

void move(char comando, char personagem, std::vector<std::vector<char>>  &matriz){

	int personagem_x = -1, personagem_y = -1;

	int l = matriz.size(), c = matriz[0].size();
	
	for (int i = 0; i < l; i++){
	for (int j = 0; j < c; j++){
		if (matriz[i][j] == personagem){
			personagem_x = i;
			personagem_y = j;
			}
		}
	}
	
	
	if (personagem_x != -1 && personagem_y != -1){
	switch (comando) // 'w', 'a', 's' e 'd'
	{
	case 'w':

	if (matriz[personagem_x - 1][personagem_y] == '-' || matriz[personagem_x - 1][personagem_y] == '|'){
		break;
	}
	matriz[personagem_x - 1][personagem_y] = personagem;
	matriz[personagem_x][personagem_y] = '.';
	break;

	case 'a':
	if (matriz[personagem_x][personagem_y - 1] == '-' || matriz[personagem_x][personagem_y - 1] == '|'){
		break;
	}
	matriz[personagem_x][personagem_y - 1] = personagem;
	matriz[personagem_x][personagem_y] = '.';
	break;

	case 's':
	if (matriz[personagem_x + 1][personagem_y] == '-' || matriz[personagem_x + 1][personagem_y] == '|'){
		break;
	}
	matriz[personagem_x + 1][personagem_y] = personagem;
	matriz[personagem_x][personagem_y] = '.';
	break;

	case 'd':
	if (matriz[personagem_x][personagem_y + 1] == '-' || matriz[personagem_x][personagem_y + 1] == '|'){
		break;
	}
		matriz[personagem_x][personagem_y + 1] = personagem;
		matriz[personagem_x][personagem_y] = '.';
		break;
	}

	}

}