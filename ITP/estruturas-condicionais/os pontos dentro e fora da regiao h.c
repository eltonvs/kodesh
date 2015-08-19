#include <stdio.h>

int main() {
    float x, y;

    scanf("%f", &x);
    scanf("%f", &y);

    printf("%i", (x >= 0 && y >= 0 && (x*x + y*y) <= 1) ? 1 : 0);

    return 0;
}
