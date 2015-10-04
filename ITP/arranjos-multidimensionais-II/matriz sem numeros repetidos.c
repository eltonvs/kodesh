int tem_repetido(int n, int m, int matriz[n][m]) {
    int i, j, k, mt[n*m], c = 0, cont = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            mt[c] = matriz[i][j], c++;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++, cont = 0) {
            for (k = 0; k < n*m; k++)
                if (matriz[i][j] == mt[k]) cont++;
            if (cont > 1) return 1;
        }

    return 0;
}
