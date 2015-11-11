int mdc(int a, int b) {
    return (a%b) ? mdc(b, a%b) : b;
}
