int divisao(int *m, int *n, int d) {
    int t = 0;
    if(!(*m)%d) *m = (*m)/d, t = 1;
    if(!(*n)%d) *n = (*n)/d, t = 1;
    return t ? 1 : 0;
}
