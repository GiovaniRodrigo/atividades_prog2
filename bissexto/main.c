#include <stdio.h>

struct data {
    int dia;
    int mm;
    int aaaa;
};

int bissexto(struct data d) {
    if (d.aaaa % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    struct data d;
    printf("Insira uma data no formato dd/mm/aaaa\n");
    scanf("%d/%d/%d", &d.dia, &d.mm, &d.aaaa);

    int respostaBissexto = bissexto(d);

    if (respostaBissexto == 1)
    {
        printf("o ano é bissexto\n");
    } else {
        printf("o ano não é bissexto\n");
    }
}