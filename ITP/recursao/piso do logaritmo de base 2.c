int p_log2(int n) {
    return (n > 1) ? p_log2(n/2) + 1 : 0;
}
