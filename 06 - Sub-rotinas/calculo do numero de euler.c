double euler(){
    double soma = 1;
    int i, fatorial = 1;

    for (i = 1; 1.00/fatorial > 0.0000000001; i++)
    	fatorial *= i, soma += 1.00/fatorial;

	return soma;
}
