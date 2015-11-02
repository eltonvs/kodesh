unsigned char manip(unsigned char n) {
    n >>= 3;

    if ((n & (1<<4)) == 0)
        n |= (3<<6), n &= (~1);

    return (n < 128) ? n | 170 : n & 170;
}
