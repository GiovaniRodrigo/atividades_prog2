#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct {
    int codigo;
    char nome[50];
    char tipo_sanguineo[2];
} doador[MAX], aux;


void main () {
    int n;
    
    printf("Insira o tamanho do teste\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Insira o codigo\n");
        scanf("%d", &doador[i].codigo);
        printf("Insira o nome\n");
        scanf(" %[^\n]", doador[i].nome);
        printf("Insira o tipo sanguíneo\n");
        scanf(" %[^\n]", doador[i].tipo_sanguineo);

        system("clear");
    }
    

    system("clear");

    printf("Ordenado por código\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++) {
            if (doador[j].codigo > doador[j + 1].codigo) {
                aux = doador[j];
                doador[j] = doador[j + 1];
                doador[j + 1] = aux;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++) {
        printf("================================================================\n");
        printf("Código: %d\nNome: %s\nTipo sanguíneo:  %s\n", doador[i].codigo, doador[i].nome, doador[i].tipo_sanguineo);
    }
    
    printf("\n\n\n\n");

    printf("Ordenado por nome\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++) {
            int nome1;
            int nome2;
            nome1 = doador[j].tipo_sanguineo[0] + doador[j].tipo_sanguineo[1];
            nome2 = doador[j + 1].tipo_sanguineo[0] + doador[j].tipo_sanguineo[1];
            if (nome1 > nome2) {
                aux = doador[j];
                doador[j] = doador[j + 1];
                doador[j + 1] = aux;
            }   
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("================================================================\n");
        printf("Código: %d\nNome: %s\nTipo sanguíneo:  %s\n", doador[i].codigo, doador[i].nome, doador[i].tipo_sanguineo);
    }

    printf("\n\n\n\n");

    printf("Ordenado por tipo sanguíneo\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++) {
            int tipo_sanguineo1;
            int tipo_sanguineo2;
            tipo_sanguineo1 = doador[j].nome[0];
            tipo_sanguineo2 = doador[j + 1].nome[0];
            if (tipo_sanguineo1 > tipo_sanguineo2) {
                aux = doador[j];
                doador[j] = doador[j + 1];
                doador[j + 1] = aux;
            }   
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("================================================================\n");
        printf("Código: %d\nNome: %s\nTipo sanguíneo:  %s\n", doador[i].codigo, doador[i].nome, doador[i].tipo_sanguineo);
    }
    
}