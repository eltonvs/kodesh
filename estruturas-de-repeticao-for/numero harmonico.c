#include <stdio.h>
#include <math.h>

int main() {
    int n, k;
    float h = 0;

    scanf("%i", &n);

    for (k = 1; k <= n; k++)
        h += pow(k, -1);

    printf("%.3f", h);

    return 0;
}
