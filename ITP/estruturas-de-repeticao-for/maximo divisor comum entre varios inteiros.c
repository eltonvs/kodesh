#include <stdio.h>

int main() {
    int n, n1, n2, resto, i;

    scanf("%i", &n);
    scanf("%i", &n1);

    for (i = 0; i < n-1; i++)
        scanf("%i", &n2);
        do
            resto = n1 % n2, n1 = n2, n2 = resto;
        while(resto != 0);

    printf("%i", n1);

    return 0;
}
