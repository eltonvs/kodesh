int mod(int x, int y) {
    return (abs(x) > abs(y)) ? mod(abs(x)-abs(y), abs(y)) : (abs(x) < abs(y)) ? abs(x) : 0;
}
