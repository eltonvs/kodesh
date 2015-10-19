#include <stdio.h>

int main() {
    int n1, n2, resto = 1;

    scanf("%i %i", &n1, &n2);
    
    while (resto != 0)
        resto = n1 % n2, n1 = n2, n2 = resto;

    printf("%i", n1);

    return 0;
}
