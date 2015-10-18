void seq(int n) {
    printf("%i ", n);
    if (n > 1) seq(n%2 ? n*2 : n/3);
}
