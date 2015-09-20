int quebra_digito(int *n) {
    int t = *n;
    *n /= 10;
    return t%10;
}
