#include <stdio.h>

int main () {
	int m, n;
	unsigned soma = 0, fat = 1;
	scanf("%d %d", &m, &n);

	for (int i = 1; i <= n; i++) {
		fat = fat * i;
	}

	soma = fat;

	fat = 1;

	for (int i = 1; i <= m; i++)
	{
		fat = fat * i;
	}

	soma = soma + fat;
	
	
	printf("%d\n", soma);

	return 0;
}