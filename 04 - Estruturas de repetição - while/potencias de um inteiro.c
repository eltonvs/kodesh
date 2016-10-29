#include <stdio.h>

int main () {
    int x, n, multiplicador = 1, contador = 0;

    scanf("%i %i", &x, &n);

    while (contador < n){
        multiplicador = x * multiplicador;
        contador++;
    }

    printf("%i", multiplicador);

    return 0;
}
