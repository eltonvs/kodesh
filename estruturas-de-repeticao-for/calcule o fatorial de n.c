#include <stdio.h>

int main () {
    int i, n, fatorial = 1;

	scanf("%i", &n);

	for (i = n; i >=1; i--)
		fatorial *= i;

	printf("%i",fatorial);

	return 0;
}
