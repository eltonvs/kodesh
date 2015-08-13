double euler() {
    double soma = 0;
    int i, j, fatorial = 1;

	for (i = 0; (double)1/fatorial > 0.0000000001; i++) {
		fatorial = 1;
		for (j = 1; j <= i; j++)
			fatorial *= j;
		soma += (double)1/fatorial;
	}
	return soma;
}
