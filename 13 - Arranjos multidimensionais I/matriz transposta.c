#include <stdio.h>

int main() {
    int i, j, c1, c2;

    scanf("%i %i", &i, &j);

    float m[i][j];

    for (c1 = 0; c1 < i; c1++)
        for (c2 = 0; c2 < j; c2++)
            scanf("%f", &m[c1][c2]);

    for (c1 = 0; c1 < j; c1++){
        for (c2 = 0; c2 < i; c2++)
            printf("%.2f ", m[c2][c1]);
        printf("\n");
    }

    return 0;
}
