//Mostra o nome de c1
printf("%s\n", c1.nome);
//Verifica se c1 pode ser vendedor
if (c1.idade >= 20 && c1.idade <= 60 && c1.curso_superior && c1.idiomas_fluente >= 2)
    printf("selecionado, vaga vendedor");
//Verifica se c1 pode ser motorista entregador
else if (c1.idade >= 18 && c1.idade <= 30 && c1.carteira_motorista)
    printf("selecionado, vaga motorista entregador");
//Se não for apto a nada
else
    printf("não selecionado");

//Mostra o nome de c2
printf("\n%s\n", c2.nome);
//Verifica se c2 pode ser vendedor
if (c2.idade >= 20 && c2.idade <= 60 && c2.curso_superior && c2.idiomas_fluente >= 2)
    printf("selecionado, vaga vendedor");
//Verifica se c2 pode ser motorista entregador
else if (c2.idade >= 18 && c2.idade <= 30 && c2.carteira_motorista)
    printf("selecionado, vaga motorista entregador");
//Se não for apto a nada
else
    printf("não selecionado");
