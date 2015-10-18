scanf("%i", &n);

struct Produto vetProd[n];

//Le o primeiro valor
scanf("%i", &vetProd[0].codigo);
gets(vetProd[0].descricao);
scanf("%f", &vetProd[0].valor);
scanf("%i", &vetProd[0].estoque);

//Copia os dados do primeiro para a variável de comparação
float mv = vetProd[0].valor;
int c_mv = vetProd[0].codigo;

//Le os valores restantes
for (i = 1; i < n; i++) {
    scanf("%i", &vetProd[i].codigo);
    gets(vetProd[i].descricao);
    scanf("%f", &vetProd[i].valor);
    scanf("%i", &vetProd[i].estoque);
    //Verifica se é menor
    if(vetProd[i].valor < mv)
        //Se for, atribui o valor
        mv = vetProd[i].valor, c_mv = vetProd[i].codigo;
}

//Mostra o menor
printf("%i %.2f\n", c_mv, mv);
