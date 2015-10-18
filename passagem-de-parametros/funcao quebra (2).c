void quebra(int n, int *prim, int *ult, int *miolo) {
    int p = 1;
    *prim = n, *ult = n%10;
    while (*prim >= 10) *prim /= 10, p *= 10;
    *miolo = (n - *prim*p)/10;
}
