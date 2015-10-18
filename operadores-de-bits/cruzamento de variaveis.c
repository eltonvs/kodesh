int cruzamento(int n, int m, int i) {
    int c;

    n = n >> i, n = n << i, m = m << (16 - i), m = m >> (16 - i);
    
    for (c = 0; c <= i; c++)
        n = n | 1 << c;

    for (c = i + 1; c < 16; c++)
        m = m | 1 << c;

    return n & m;
}
