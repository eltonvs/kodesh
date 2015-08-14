int bitN(unsigned int i, int n) {
    return ((i & 1 << n) == 0) ? 0 : 1;
}
