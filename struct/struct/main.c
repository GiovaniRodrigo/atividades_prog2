#include <stdio.h>

struct data {
	int dia;
	int mes;
	int ano;
};

int bissexto (struct data d){
	if (d.ano%4 == 0 && d.ano%100 != 0){
		return 1;
	} else {
		return 0;
	}
}


int main (void){
	struct data d;

	printf("Informe uma data (dd:mm:aaaa)\n");
	scanf("%d:%d:%d", &d.dia, &d.mes, &d.ano);

	int eBissexto = bissexto(d);
	printf(eBissexto);

	if(eBissexto == 1){
		printf("O ano é bissexto\n");
	} else {
		printf("O ano não é bissexto");
	}

}
