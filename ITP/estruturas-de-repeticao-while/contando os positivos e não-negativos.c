#include <stdio.h>

int main () {
    int n, temp, somapos = 0, somaneg = 0, cont = 0;

    scanf ("%i", &n);

    while (cont < n){
        scanf("%i", &temp);
        if (temp > 0)
            somapos++;
        else
            somaneg++;
        cont++;
    }

    printf ("%i %i", somapos, somaneg);

    return 0;
}
