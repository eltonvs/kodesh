int divisao(int *m, int *n, int d) {
    int t1 = *m, t2 = *n;
    if((*m)%d == 0) *m = (*m)/d;
    if((*n)%d == 0) *n = (*n)/d;
    return (t1%d == 0 || t2%d == 0) ? 1 : 0;
}
