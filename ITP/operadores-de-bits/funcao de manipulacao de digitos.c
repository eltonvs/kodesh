int manipulaDigitos(int x, int y, int funcao, int fator) {
    switch(funcao) {
        case 1:
            x <<= fator, y <<= fator;
            break;
        case 2:
            x >>= fator, y >>= fator;
            break;
        case 3:
            x &= fator, y &= fator;
            break;
        case 4:
            x |= fator, y |= fator;
            break;
        case 5:
            x ^= fator, y ^= fator;
            break;
    }
    
    return x + y;
}
