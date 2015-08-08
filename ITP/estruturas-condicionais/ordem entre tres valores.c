#include <stdio.h>

int main() {
    int x, y, z, aux1, aux2;

    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);

    if (x > y && y > z) {
        aux1 = x;
        x = z;
        z = aux1;
    }else if (x > y && x > z) {
        aux1 = x;
        aux2 = z;
        x = y;
        z = aux1;
        y = aux2;
    }else if (y > x && x > z) {
        aux1 = y;
        aux2 = x;
        x = z;
        y = aux2;
        z = aux1;
    }else if (y > x && y > z) {
        aux1 = y;
        y = z;
        z = aux1;
    }else if (z > x && x > y) {
        aux1 = x;
        x = y;
        y = aux1;
    }

    printf("%i %i %i", x, y, z);

    return 0;
}
