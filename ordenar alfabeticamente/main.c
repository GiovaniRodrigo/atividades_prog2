    #include <stdio.h>
    #include <stdlib.h>

    #define MAX 3

    void main() {
        struct {
            char nome[50];
            int codigo;
            char descricao[50];
            float preco;
        } ficha_produto[MAX], ordenado[MAX];

        for (int i= 0; i < MAX; i++) {
            printf("Insira o nome do produto %d\n", i+1);
            scanf(" %[^\n]", ficha_produto[i].nome);

            printf("Insira o código do produto %d\n", i+1);
            scanf("%d", &ficha_produto[i].codigo);

            printf("Insira a descrição do produto %d (Máximo de 50 caracteres)\n", i+1);
            scanf(" %[^\n]", ficha_produto[i].descricao);

            printf("Insira o preço unitário do produto %d\n", i+1);
            scanf("%f", &ficha_produto[i].preco);

        }
        // Limpa a tela
        system("clear");

        // mostra ordenado
        int contador = 0;
        int letraNumero;
        int letraNumero2;
        for (int i = 0; i < MAX; i++) {
            letraNumero = ficha_produto[i].nome[0];
            letraNumero2 = ficha_produto[i + 1].nome[0];
            if (letraNumero > letraNumero2){
                ordenado[i] = ficha_produto[i];
                ficha_produto[i] = ficha_produto[i+1];
                ficha_produto[i+1] = ordenado[i];
            }
        }
        

        for (int i = 0; i < MAX; i++) {
            printf("Nome: ");
            for (int j = 0; j < ficha_produto[i].nome[j] != '\0'; j++) {
                printf("%c", ficha_produto[i].nome[j]);
            }
            printf("\n");
            
            printf("Código: %d\nDescrição: %s\nPreço: %.2f\n", ficha_produto[i].codigo, ficha_produto[i].descricao, ficha_produto[i].preco);
            printf("\n\n");
        }
        
    }