int ehTrianguloRetangulo (int a, int b, int c) {
    if (a > b && a > c)
        return (a*a == b*b + c*c) ? 1 : 0;
    else if (b > a && b > c)
        return (b*b == a*a + c*c) ? 1 : 0;
    else
        return (c*c == b*b + a*a) ? 1 : 0;
}
