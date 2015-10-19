double equacao_reta(double x1, double y1, double x2, double y2, double x) {
    return (x * y1 + x1 * y2 - x2 * y1 - x * y2) / (x1 - x2);
}
