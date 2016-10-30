#include <stdio.h>

int main () {
    int dia = 1, qtd, mdia = 0, mqtd = 0;

    while (dia <= 30) {
        scanf("%i", &qtd);
        if (qtd > mqtd)
            mdia = dia, mqtd = qtd;
        dia++;
    }

    printf("%i %i", mdia, mqtd);

    return 0;
}
