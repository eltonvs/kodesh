#include <stdio.h>

int main () {
    int n, temp, somapar = 0, somaimpar = 0, cont = 0;

    scanf("%i", &n);

    while (cont < n) {
        scanf("%i", &temp);
        if (temp%2)
            somaimpar++;
        else
            somapar++;
        cont++;
    }

    printf("%i %i", somapar, somaimpar);

    return 0;
}
