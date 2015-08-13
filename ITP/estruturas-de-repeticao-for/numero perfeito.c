#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, soma = 0;

    scanf("%i", &n);

    for (i = 2; i <= n; i++) {
        for (j = i - 1; j >= 1; j--)
            if (i % j == 0)
                soma += j;
        if (soma == i)
            printf("%i ", i);
        soma = 0;
    }

    return 0;
}
