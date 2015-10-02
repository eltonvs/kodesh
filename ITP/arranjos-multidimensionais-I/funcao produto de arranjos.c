void produto_arranjos(int n, int m, double matriz[n][m], double vetor[m]) {
    int i, j;
    double r;
    for (i = 0; i < n; i++) {
        r = 0;
        for (j = 0; j < m; j++)
            r += matriz[i][j] * vetor[j];
        printf("%.2lf ", r);
    }
}
