int soma_d(int a) {
    return (a == 0) ? 0 : a%10 + soma_d(a/10);
}
