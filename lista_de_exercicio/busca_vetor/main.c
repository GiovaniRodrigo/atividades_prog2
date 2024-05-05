#include <stdio.h>

int main () {
    double A[10]; //mudar para 100

    for (int i = 0; i < 10; i++) { // mudar para 100
        scanf("%lf", &A[i]);
    }

    for (int i = 0; i < 10; i++) //mudar para 100
    {
        if (A[i] <= 10)
        {
            printf("A[%d] = %0.1lf\n", i, A[i]);
        }
        
    }
    
    
}