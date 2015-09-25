void produto_matrizes(int n, int m, int l, float matriz1[n][m], float matriz2[m][l], float matriz3[n][l]) {
    int i, j, k;
	float soma = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < l; j++) {
			for (k = 0; k < m; k++)
				soma = soma + matriz1[i][k]*matriz2[k][j];
			matriz3[i][j] = soma, soma = 0;
	}
}
