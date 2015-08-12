#include <stdio.h>

int main() {
    int n, n1, n2, mdc, resto, i, numeros[100];

    scanf("%i", &n);

    for (i = 0; i < n; i++)
        scanf("%i", &numeros[i]);

    for (i = 0; i < (n - 1); i++) {
        resto = 1, n1 = numeros[i], n2 = numeros[i + 1];
        while (resto != 0) {
            resto = n1 % n2;
            if (resto == 0)
                mdc = n2;
            else
                n1 = n2, n2 = resto;
        }
        numeros[i + 1] = mdc;
    }

    printf("%i", numeros[n - 1]);

    return 0;
}
