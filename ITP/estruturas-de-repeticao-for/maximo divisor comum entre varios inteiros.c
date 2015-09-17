#include <stdio.h>

int main() {
    int n, n1, n2, resto, i;

    scanf("%i", &n);

    for (i = 0; i < n; i++)
        if (i == 0) {
            scanf("%i", &n1);
        }else {
            scanf("%i", &n2);
            do {
                resto = n1 % n2;
                n1 = n2, n2 = resto;
            }while(resto != 0);
        }

    printf("%i", n1);

    return 0;
}
