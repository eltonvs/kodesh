#include <stdio.h>
#include <math.h>

int main() {
    int n, k, i, j;
    float r = 0;
    scanf("%i", &n);
    float p[n];
    for (i = 0; i < n; i++) scanf("%f", &p[i]);
    scanf("%i", &k);
    float c[n];
    for (i = 0; i < k; i++) scanf("%f", &c[i]);

    for (i = 0; i < k; i++){
        for (j = 0; j < n; j++)
            r += p[j]*pow(c[i], j);
        printf("%.2f ", r);
        r = 0;
    }

    return 0;
}
