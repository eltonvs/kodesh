int ehTrianguloRetangulo (int a, int b, int c) {
    return (a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a) ? 1 : 0;
}
