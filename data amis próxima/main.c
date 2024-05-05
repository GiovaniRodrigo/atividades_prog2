#include <stdio.h>

#define MAX 100

void main () {
    struct {
        int dd;
        int mes;
        int aaaa;

    } aux[2], data[MAX];
    int n;

    aux[0].dd = 0;
    aux[0].mes = 0;
    aux[0].aaaa = 0;
    aux[1].dd = 0;
    aux[1].mes = 0;
    aux[1].aaaa = 0;


    printf("Insira o tamanho do vetor\n");
    scanf("%d", &n);
    for( int i = 0; i < n; i++) {
        printf("Insira o %d elemento do vetor\n", i+1);
        scanf("%d/%d/%d", &data[i].dd, &data[i].mes, &data[i].aaaa);        
    }

    printf("Data de referência\n");
    scanf("%d/%d/%d", &data[99].dd, &data[99].mes, &data[99].aaaa);

    aux[0] = data[0];


    for (int i = 0; i < n; i++) {
        if ((data[i].dd < aux[0].dd && aux[0].dd >= data[99].dd) || (data[i].mes < aux[0].mes && aux[0].mes >= data[99].mes) || (data[i].aaaa < aux[0].aaaa && aux[0].aaaa >= data[99].aaaa)) {
            aux[0] = data[i];
        }
        if ((data[i].dd > aux[0].dd && aux[0].dd <= data[99].dd) || (data[i].mes > aux[0].mes && aux[0].mes <= data[99].mes) || (data[i].aaaa > aux[0].aaaa && aux[0].aaaa <= data[99].aaaa)) {
            aux[1] = data[i];
        } 


            

        
    }

    

    if (aux[1].dd != 0 || aux[1].mes != 0 || aux[1].aaaa != 0){
        printf("Existem 2 números mais próximos\n");
        printf("%d %d %d\n", aux[0].dd, aux[0].mes, aux[0].aaaa);
        printf("%d %d %d\n", aux[1].dd, aux[1].mes, aux[1].aaaa);
    } else {
        printf("Somente 1 é o mais próximo\n");
        printf("%d %d %d\n", aux[0].dd, aux[0].mes, aux[0].aaaa);
    }
    
    
    
}