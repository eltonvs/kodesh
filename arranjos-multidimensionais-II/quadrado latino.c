int eh_latina(int n, int m[n][n]) {
    int i, j, k, vet[n];

    for (i = 0; i < n; i++) {
        vet[i] = 0;
        for (j = 0; j < n; j++) {
            vet[i] += m[i][j];
            for (k = 0; k < n; k++)
                if (m[i][j] == m[i][k] && j != k) return 0;
        }
    }
    
    for (i = 0; i < n-1; i++)
        if (vet[i] != vet[i+1]) return 0;

    for (j = 0; j < n; j++) {
        vet[j] = 0;
        for (i = 0; i < n; i++) {
            vet[j] += m[i][j];
            for (k = 0; k < n; k++)
                if (m[i][j] == m[k][j] && i != k) return 0;
        }
    }
    
    for (i = 0; i < n-1; i++)
        if (vet[i] != vet[i+1]) return 0;
    
    return 1;
}
