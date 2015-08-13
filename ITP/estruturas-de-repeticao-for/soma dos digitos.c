#include <stdio.h>

int main() {
    int n, i, soma = 0, digit = 0, d;

    scanf("%i", &n);

    do
        d = d/10, digit++;
    while (d != 0);

    d = n;

    for (i = 0; i < digit; i++)
        soma += d % 10, d = d / 10;

    printf("%i", soma);

    return 0;
}
