int mdc(int a, int b) {
    return (a%b == 0) ? b : mdc(b, a%b);
}
