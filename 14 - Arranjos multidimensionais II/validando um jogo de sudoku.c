int latino(int n, int m[n][n]) {
    int i, j, k, vet[n];

    for (i = 0; i < n; i++) {
        vet[i] = 0;
        for (j = 0; j < n; j++) {
            vet[i] += m[i][j];
            for (k = 0; k < n; k++)
                if (m[i][j] == m[i][k] && j != k) return 0;
        }
    }

    for (i = 0; i < n - 1; i++)
        if (vet[i] != vet[i + 1]) return 0;

    for (j = 0; j < n; j++) {
        vet[j] = 0;
        for (i = 0; i < n; i++) {
            vet[j] += m[i][j];
            for (k = 0; k < n; k++)
                if (m[i][j] == m[k][j] && i != k) return 0;
        }
    }

    for (i = 0; i < n - 1; i++)
        if (vet[i] != vet[i + 1]) return 0;

    return 1;
}

int soma_matriz(int n, int m[n][n]) {
    int i, j, s = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            s += m[i][j];
    return s;
}

int eh_sudoku(int sud[9][9]) {
    int i, j, x, y, mini[3][3];

    if (!latino(9, sud)) return 0;

    for (x = 0; x <= 6; x += 3)
        for (y = 0; y <= 6; y += 3) {
            for (i = 0; i < 3; i++)
                for (j = 0; j < 3; j++)
                    mini[i][j] = sud[i+x][j+y];
            if (soma_matriz(3, mini) != 45) return 0;
        }
    return 1;
}
