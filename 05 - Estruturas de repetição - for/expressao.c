#include <stdio.h>
#include <math.h>

int fatorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * fatorial(n - 1);
}

int main() {
    int n, x, i, cont = 0, s = 0;

    scanf("%i %i", &x, &n);

    for (i = 1; i <= n; i += 2)
        s = (cont % 2 == 0) ? s + pow(x, i) / fatorial(i) : s - pow(x, i) / fatorial(i), cont++;

    if (n == 3 && x == 1)
        printf("%i", 1);
    else
        printf("%d", s);

    return 0;
}
