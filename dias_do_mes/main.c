#include <stdio.h>

struct data {
    int dia;
    int mm;
    int aaaa;
};


int diasDoAno (struct data d) {
    if (d.aaaa % 400 == 0 && d.mm == 2 ) {
        return 29;
    } else {
        if (d.mm == 2) {
            return 28;
        } else {
            if (d.mm % 2 == 0) {
                return 30;
            } else {
                return 31;
            }
            
        }
        
    }
    
}

void main () {
    struct data diasAno;
    printf("Insira uma data no formato dd/mm/aaaa\n");
    scanf("%d/%d/%d", &diasAno.dia, &diasAno.mm, &diasAno.aaaa);

    printf("O mês deste ano tem %d dias\n", diasDoAno(diasAno));

}