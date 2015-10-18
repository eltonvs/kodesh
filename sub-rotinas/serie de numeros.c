#include <math.h>

double calculaSerie(int n) {
    int i, topo = 1;
    double s = 0;

    for (i = 1; i <= n; i += 2)
        s += (double)(topo / pow(i, 2)) * (topo / pow(i + 1, 2)), topo++;

    return s;
}

double calculaPorcentagem(double s, double v) {
    return s * v;
}
