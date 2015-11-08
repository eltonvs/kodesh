int inter(int x, int y, int z) {
    return (x >= y && z >= y && z <= x) || (y > x && z >= x && z <= y);
}
