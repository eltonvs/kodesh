#include <stdio.h>

int main() {
    float x, y;

    scanf("%f", &x);
    scanf("%f", &y);

    if (x >= 0 && y >= 0 && (x*x + y*y) <= 1)
        printf("%i", 1);
    else
        printf("%i", 0);

    return 0;
}
