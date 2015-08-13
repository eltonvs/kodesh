int pot (int p, int n) {
    return (n == 0) ? 1 : p * pot (p, n - 1);
}
