#include <stdio.h>

int main () {
    int n, impar = 1;

    scanf("%i", &n);

    while (n > 0) {
        printf("%i ", impar);
        impar += 2, n--;
    }

    return 0;
}
