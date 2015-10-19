#include <stdio.h>

int main () {
    int n, impar = 1, cont = 0;

    scanf ("%i", &n);

    while (cont < n){
        printf("%i ", impar);
        impar += 2, cont++;
    }

    return 0;
}
