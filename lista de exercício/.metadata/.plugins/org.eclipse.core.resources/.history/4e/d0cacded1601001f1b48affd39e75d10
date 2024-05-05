#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct torneio {
	double pontuacao;
	char nome[50];
} aux;

void ordena(struct torneio equipe[MAX], int n){
	int i = 0;
	int nome1;
	int nome2;
	while (i < n){
		for (int w = 0; w < 50; w++){
			nome1 = equipe[i].nome[w];
			nome2 = equipe[i + 1].nome[w];
			if (nome1 > nome2){
				aux = equipe[i];
				equipe[i] = equipe[i +1];
				equipe[i + 1] = aux;
			}
		}
		i++;
	}
}

char nome_aleatorio () {
	int y = 0;
	while (y < 'a' || y > 'z') {
		y = 'a' + (rand() % ('z' - 'a' + 1));
	}
	return y;
}

void main () {
	struct torneio equipes[MAX];

	printf("Inserindo dados aleatórios\n");

	for (int i = 0; i < MAX; i++){
		for (int j = 0; j < 50; j++){
			equipes[i].nome = nome_aleatorio();
		}
		equipes[i].pontuacao = rand() % 4000 / 1.5;
	}

	ordena(&equipes, MAX);
}
