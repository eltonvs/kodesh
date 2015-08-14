unsigned char manip(unsigned char n) {
    n ^= 1 << 7, n &= ~(1 << 4), n &= ~7;

    return (n < 128) ? n << 1 : n;
}
