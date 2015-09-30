#include <stdio.h>

int main() {
    int d, n, i, t;

    scanf("%i %i", &d, &n);

    int dado[d];
    memset(dado, 0, sizeof(dado));

    for (i = 0; i < n; i++) {
        scanf("%i", &t);
        dado[t-1]++;
    }

    for (i = 0; i < d; i++)
        printf("%i ", dado[i]);

    return 0;
}
