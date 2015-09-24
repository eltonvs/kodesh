#include <stdio.h>

int main() {
    int n, soma = 0;

    scanf("%i", &n);
    
    while (n != 0)
        soma += (n%10), n /= 10;

    printf("%i", soma);

    return 0;
}
