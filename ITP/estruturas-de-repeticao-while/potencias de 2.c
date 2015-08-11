#include <stdio.h>
#include <math.h>

int main() {
    int n, c = 0;
    scanf("%i", &n);

    while (c < n) {
        printf("%.0f ", pow(2, c));
        c++;
    }

    return 0;
}
