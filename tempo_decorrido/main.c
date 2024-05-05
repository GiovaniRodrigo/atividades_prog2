#include <stdio.h>

struct horario {
    unsigned int hora;
    unsigned int min;
    unsigned int seg;
};

struct horario tempo_decorrido (struct horario tempo1, struct horario tempo2){
    int segundos = tempo1.hora * 3600;
    segundos = segundos + tempo1.min * 60;
    segundos = segundos + tempo1.seg;
    int segundos2 = tempo2.hora * 3600;
    segundos2 = segundos2 + tempo2.min * 60;
    segundos2 = segundos2 + tempo2.seg;

    int diferenca =  segundos2 - segundos;

    tempo1.hora = diferenca / 3600;
    tempo1.min  = (diferenca % 3600) / 60;
    tempo1.seg  = diferenca % 60; 
    
    return tempo1;
}

int main () {
    struct horario hora[2], tempoDecorrido;

    printf("Insira dois horários no formato hh:mm:ss\n");

    for (int i = 0; i < 2; i++) {
        printf("Insira o %d° horário\n", i +1);
        scanf("%d:%d:%d", &hora[i].hora, &hora[i].min, &hora[i].seg);
    }

    tempoDecorrido = tempo_decorrido(hora[0], hora[1]);
    
    printf("%02d:%02d:%02d\n", tempoDecorrido.hora, tempoDecorrido.min, tempoDecorrido.seg);

    return 0;
}
