#include <stdio.h>

int main () {
    int n, soma = 0;

    scanf("%i", &n);

    while (n > 0)
        soma += n, n--;

    printf("%i", soma);

    return 0;
}
