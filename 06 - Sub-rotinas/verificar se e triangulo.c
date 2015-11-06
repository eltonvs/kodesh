int ehTriangulo(int a, int b, int c) {
    return abs(b - c) < a && a < b + c;
}
