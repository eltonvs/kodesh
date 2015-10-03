#include <stdio.h>

int main() {
    int n, i, j, en = 0, st = 1;

    scanf("%i", &n);

    int m[n][n];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%i", &m[i][j]);

    for (i = 0; i < n; i++, en = 0) {
        for (j = 0; j < n; j++)
            if (m[i][j] == 0) en++;
        if (en != n-1) st = 0;
    }

    for (i = 0; i < n; i++, en = 0) {
        for (j = 0; j < n; j++)
            if (m[j][i] == 0) en++;
        if (en != n-1) st = 0;
    }

    printf("%c\n", st ? 'S' : 'N');

    return 0;
}
