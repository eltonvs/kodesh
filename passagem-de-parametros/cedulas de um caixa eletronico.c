void cedulas(int valor, int *um, int *cinco, int *dez, int *vinte) {
    *vinte = valor/20, *dez = valor%20/10, *cinco = valor%20%10/5, *um = valor%20%10%5;
}
