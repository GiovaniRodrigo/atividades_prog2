#include <stdio.h>

int main(void) {
    unsigned long long int aux = 0, a = 0, b = 1;
    unsigned int n = 0;

    scanf("%u", &n);

    if (n == 0)
        printf("Fib(0) = 0\n");
    else if (n == 1)
        printf("Fib(1) = 1\n");
    else {
        for (unsigned int i = 2; i <= n; i++) {
            aux = a + b;
            a = b;
            b = aux;
        }
        printf("Fib(%u) = %llu\n", n, aux);
    }

    return 0;
}
