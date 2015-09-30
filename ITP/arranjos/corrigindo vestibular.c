#include <stdio.h>

int main() {
    int n, gab[30], i, j, t, s = 0;

    scanf("%i", &n);

    for (i = 0; i < 30; i++)
        scanf("%i", &gab[i]);

    for (i = 0; i < n; i++, s = 0) {
        for (j = 0; j < 30; j++) {
            scanf("%i", &t);
            if (t == gab[j]) s++;
        }
        printf("%.2f\n", s/3.0);
    }

    return 0;
}
