#include <stdio.h>

int main() {
    int x, polinomio;

    scanf("%i", &x);

    polinomio = 3*(x * x * x) - 5*(x * x) + 2 * x - 1;
    printf("%i", polinomio);

    return 0;
}
