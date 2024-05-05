#include <stdio.h>
#include <stdlib.h>
#include "logico.h"
#include "geometricas.h"
int main () {
    int opcao;
    double raio;             
    double lado;
    double altura;

    printf("GEOMÉTRICO EM C\n");
    do  {
        printf("\nEscolha uma função:\n"
            "1. Perímetro Quadrado\n"
            "2. Perímetro triângulo\n"
            "3. Perímetro Círculo\n"
            "4. Área Quadrado\n"
            "5. Área Triângulo\n"
            "6. Área Círculo\n"
            "7. Volume Cubo\n"
            "8. Volume Tetraetro\n"
            "9. Volume Esfera\n"
            "0. Cancelar\n");

        scanf("%d", &opcao);
        system("clear");

        switch (opcao)
        {
        case 1:
            
            printf("Digite o valor do lado do Quadrado\n");
            scanf("%lf", &lado);
            printf("O Valor é: %lf", perimetroQuadrado(lado));
            system("clear");
            break;
        case 2:
            double lado1, lado2, lado3;
            printf("Digite o valor do lado do Triângulo\n");
            printf("Lado 1: ");
            scanf("%lf", &lado1);
            printf("Lado 2: ");
            scanf("%lf", &lado2);
            printf("Lado 3: ");
            scanf("%lf", &lado3);
            printf("O valor do perímetro do Triângulo é: %lf", perimetroTriangulo(lado1, lado2, lado3));
            system("clear");
            break;
        case 3:
            
            printf("Perímetro do Círculo\n");
            scanf("%lf", &raio);
            printf("O valor do Raio do Círculo é: %lf", perimetroCirculo(raio));
            break;
        case 4:
            printf("Área do Quadrado\n");
            scanf("%lf", &lado);
            printf("O valor da área do Quadrado é: %lf", areaQuadrado(lado));
            break;
        case 5:
            double base;
            
            printf("Área do Triângulo\n");
            printf("Base: ");
            scanf("%lf", &base);
            printf("Altura: ");
            scanf("%lf", &altura);
            printf("O valor da área do Triângulo é: %lf", areaTriangulo(base, altura));
            break;
        case 6:
            
            printf("Área do Círculo\n");
            scanf("%lf", &raio);
            printf("O valor da área do Círculo é: %lf", areaCirculo(raio));
            break;
        case 7:
            
            printf("Volume do Cubo\n");
            scanf("%lf", &lado);
            printf("O valor do volume do Cubo é: %lf", volumeCubo(lado));
            break;
        case 8:
            
            
            printf("Volume do Tetraetro\n");
            printf("Lado: ");
            scanf("%lf", &lado);
            printf("altura: ");
            scanf("%lf", &altura);
            printf("O volume do Tetraeto é: %lf", volumeTetraedro(lado, altura));
            break;
        case 9:
            printf("Volume da Esfera\n");
            scanf("%lf", &raio);
            printf("O volume da Esfera é: %lf", volumeEsfera(raio));
            break;
        case 0:
            system("clear");
            break;
        
        default:
            printf("Valor inválido!\n");
            break;
        }
    } while (opcao != 0);
    


    return 0;
}