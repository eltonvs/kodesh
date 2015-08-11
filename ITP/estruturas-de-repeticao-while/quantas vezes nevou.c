#include <stdio.h>

int main () {
    int n, temp, diasneve = 0, cont = 0;

    scanf ("%i", &n);

    while (cont < n){
        scanf("%i", &temp);
        if (temp < 0)
            diasneve++;
        cont++;
    }

    printf ("%i", diasneve);

    return 0;
}
