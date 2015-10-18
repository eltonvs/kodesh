#include <stdio.h>

int main() {
    int x, y, z, aux1, aux2;

    scanf("%i %i %i", &x, &y, &z);

    if (x > y && y > z)
        printf("%i %i %i", z, y, x);
    else if (x > y && x > z)
        printf("%i %i %i", y, z, x);
    else if (y > x && x > z)
        printf("%i %i %i", z, x, y);
    else if (y > x && y > z)
        printf("%i %i %i", x, z, y);
    else if (z > x && x > y)
        printf("%i %i %i", y, x, z);
    else
        printf("%i %i %i", x, y, z);

    return 0;
}
