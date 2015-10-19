void fatorial(int *n) {
    int i;
    if (*n == 0 || *n == 1) *n = 1;
    else for (i = *n-1; i > 1; i--) *n *= i;
}
