int fatorial (int n) {
    return (n == 0 || n == 1) ? 1 : n * fatorial(n - 1);
}
