#include <stdio.h>
#include <stdlib.h>

#define MAX 20

struct {
    int    codigo;
    char   descriao[MAX];
    double quantidade;
} produto[10][10];

void main () {
    for (int m = 0; m < 10; m++) {
        for (int n = 0; n < 10; n++) {
            printf("Informe o produto %d%d\n", m + 1, n + 1);
            printf("Código: ");
            scanf("%d", &produto[m + 1][n + 1].codigo);
            printf("Descrição: ");
            scanf(" %[^\n]", produto[m][n].descriao);
            printf("Quantidade: ");
            scanf("%lf", &produto[m][n].quantidade);
        }
        
    }

    system("clear");

    for (int m = 0; m < 10; m++) {
        for (int n = 0; n < 10; n++) {
            printf("Código: %d\n", produto[m][n].codigo);
            printf("Descrição: %s\n", produto[m][n].descriao);
            printf("Quantidade: %.2lf\n\n", produto[m][n].quantidade);
        }
    }
    
}