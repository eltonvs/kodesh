int soma_d(int a) {
    return (a < 10) ? a : a%10 + soma_d(a/10);
}
