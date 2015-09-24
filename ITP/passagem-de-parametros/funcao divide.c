int divisao(int *m, int *n, int d) {
    int t = 0;
    if((*m)%d == 0) *m = (*m)/d, t = 1;
    if((*n)%d == 0) *n = (*n)/d, t = 1;
    return t ? 1 : 0;
}
