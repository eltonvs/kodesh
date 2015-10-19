#include <stdio.h>

int main() {
    int n, i, pe = 0;
    scanf("%i", &n);
    int x[n], y[n];
    for (i = 0; i < n; i++)
        scanf("%i", &x[i]);
    for (i = 0; i < n; i++)
        scanf("%i", &y[i]);
    for (i = 0; i < n; i++)
        pe += x[i]*y[i];
    printf("%i", pe);
    return 0;
}
