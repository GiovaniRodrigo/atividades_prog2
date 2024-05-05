#include <stdio.h>

struct data {
    int dia;
    int mm;
    int aaaa;
};


struct data  dia_seguinte (struct data *d) {
    if ((*d).dia == 30 || (*d).dia == 31){
        (*d).dia = 1;
    } else {
        (*d).dia = (*d).dia +1;   
    }
}

void main () {
    struct data diasAno;
    printf("Insira uma data no formato dd/mm/aaaa\n");
    scanf("%d/%d/%d", &diasAno.dia, &diasAno.mm, &diasAno.aaaa);

    dia_seguinte(&diasAno);

    printf("O próximo dia é %02d/%02d/%4d\n", diasAno.dia, diasAno.mm, diasAno.aaaa);

}