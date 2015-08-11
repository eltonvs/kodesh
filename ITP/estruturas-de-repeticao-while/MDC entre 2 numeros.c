#include <stdio.h>
int main() {
    int n, n1, n2, mdc, resto = 1;

    scanf("%i", &n1);
    scanf("%i", &n2);
    
    while (resto != 0){
        resto = n1 % n2;
        if (resto == 0)
            mdc = n2;
        else
            n1 = n2, n2 = resto;
    }

    printf("%i", mdc);

    return 0;
}
