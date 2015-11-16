#include <stdio.h>

int main() {
    int m, n, i, j, ln = 0, cn = 0, st1, st2;
    
    scanf("%i %i", &m, &n);
    
    int matriz[m][n];

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%i", &matriz[i][j]);

    for (i = 0; i < m; i++) {
        st1 = 0, st2 = 0;
        for (j = 0; j < n; j++)
            st1 = !matriz[i][j] ? st1 : 1,
            st2 = !matriz[j][i] ? st2 : 1;
        ln = !st1 ? ln + 1 : ln,
        cn = !st2 ? cn + 1 : cn;
    }

    printf("%i %i", ln, cn);

    return 0;
}
