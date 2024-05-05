#include <stdio.h>

struct data {
    int dia;
    int mes;
    int ano;
};

int bissexto(struct data d);




int main(void) {
    struct data d;
    


    printf("Insira a data no seguinte formato: dd:mm:aaaa\n");
    scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
}

int bissexto(struct data d){
    if (d.ano%4 == 0 && d.ano%100 != 0){
        return 1;
    }
}