#include <stdio.h>

int main () {
    int n, temp, soma = 0, cont = 0;

    scanf ("%i", &n);

    while (cont < n){
        scanf("%i", &temp);
        if (temp > 0) {
            soma += temp;
        }
        cont++;
    }

    printf ("%i", soma);

    return 0;
}
