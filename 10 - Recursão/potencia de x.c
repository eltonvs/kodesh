int potencia(int x, int n) {
    return (n == 0) ? 1 : x * potencia(x, n-1);
}
