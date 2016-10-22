double calculaPI(int n) {
    int i, impar = 1;
    double pi = 0;

    for (i = 1; i <= n; i++) {
        pi = (i%2 == 0) ? pi - 4.0/impar : pi + 4.0/impar, impar += 2;
    }

    return pi;
}

double calculaArea(double pi, double raio) {
    return pi * raio * raio;
}
