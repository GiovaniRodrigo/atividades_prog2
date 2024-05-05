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
	while (i < n - 1){
		for (int j = i + 1; j < i - 1; j++){
			for (int w = 0; w < 50; w++){
				nome1 = equipe[i].nome[w];
				nome2 = equipe[j].nome[w];
				if (nome1 > nome2){
					aux = equipe[i];
					equipe[i] = equipe[j];
					equipe[j] = aux;
				}

			}
		}
		i++;
	}
}

char nome_aleatorio () {
	int y = 0;
	while (y < 'a' || y < 'z') {
		y = 'a' + (rand() % ('z' - 'a' + 1));
	}
	return y;
}

void main () {
	struct torneio equipes[MAX], ordenado[MAX];

	printf("Inserindo dados aleatórios\n");
	printf("MAX está valendo: %d\n", MAX);

	for (int i = 0; i < MAX; i++){
		for (int j = 0; j < 50; j++){
			equipes[i].nome[j] = nome_aleatorio();
		}
		equipes[i].pontuacao = (rand() % 4000) * 1.5;

		printf("Equipe %d\nNome: %s\nPontucao: %f\n\n", i + 1, equipes[i].nome, equipes[i].pontuacao);
	}

	ordena(equipes, MAX);
}
