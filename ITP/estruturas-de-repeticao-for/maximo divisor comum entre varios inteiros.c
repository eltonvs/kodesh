#include <stdio.h>

int main() {
    int n, n1, n2, mdc, resto, i;

    scanf("%i", &n);

    for (i = 0; i < n; i++)
        if (i == 0) {
            scanf("%i", &n1);
        }else {
            scanf("%i", &n2);
            do {
                resto = n1 % n2;
                if (resto == 0)
                    mdc = n2;
                else
                    n1 = n2, n2 = resto;
            }while(resto != 0);
            n1 = mdc;
        }

    printf("%i", n1);

    return 0;
}
