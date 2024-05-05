#include <stdio.h>

#define MAX 100

struct {
    char nome[50];
    struct {
        int ddd[3];
    } telefone;
} pessoa[MAX];

void main () {

    for (int i = 0; i < 3; i++) {
        scanf("%d", pessoa[0].telefone.ddd[i]);
        
    }
    

}