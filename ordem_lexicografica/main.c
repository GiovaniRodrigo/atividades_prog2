#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100

struct torneio
{
    char nome[50];
    float pontuacao;
} aux;

void ordena_nome(struct torneio *equipes)
{
    for (int i = 0; i < MAX; i++) {
        for (int j = i + 1; j < i - 1; j++) {
            int nome1;
            int nome2;
            for (int y = 0; y < 50; y++) {
                nome1 = equipes[i].nome[y];
                nome2 = equipes[j].nome[y];
                if (nome1 > nome2) {
                    aux = equipes[i];
                    equipes[i] = equipes[j];
                    equipes[j] = aux;
                }
            }
            
        }
    }
};

void ordena_pontuacao(struct torneio *equipes)
{
    for (int i = 0; i < MAX; i++) {
        for (int j = i + 1; j < i - 1; j++) {
            if (equipes[i].pontuacao > equipes[j].pontuacao) {
                aux = equipes[i];
                equipes[i] = equipes[j];
                equipes[j] = aux;
            }
        }
    }
};

void ordena(struct torneio *equipe[MAX], int n)
{
    for (int i = 0; i < MAX; i++)
    {
        int aux = (*equipe)[i].pontuacao;
        for (int j = 0; j < MAX; j++)
        {
            if (aux == (*equipe)[j].pontuacao)
            {
                ordena_nome(*equipe);
            }
            else
            {
                ordena_pontuacao(*equipe);
            }
        }
    }
}

int nome_aleatorio(){
   int y = 0;
    while (y < 'a' || y > 'z') // Garantindo que y está no intervalo correto
    {
        y = 'a' + (rand() % ('z' - 'a' + 1)); // Adicionando deslocamento para o intervalo correto
    }
    return y;
}

void main()
{
    struct torneio equipes[MAX];

    printf("Vamos atribuir nomes e pontuação aleatória\n");

    for (int i = 0; i < MAX; i++)
    {
        for (int y = 0; y < 50; y++) {
            equipes[i].nome[y] = nome_aleatorio();
        }
        
        equipes[i].pontuacao = (rand() % 4000) / 1.5;

        printf("Nome: ");
        for (int y = 0; y < 50; y++) {
            printf("%c", equipes[i].nome[y]);
        }

        printf("\n");
        
        printf("Pontuação: %f\n", equipes[i].pontuacao);

        printf("\n################# ORDENAR   ##################\n\n");

        ordena(equipes, MAX);

    }
}