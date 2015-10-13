Posicao translacao(Posicao ini, float deltaX, float deltaY) {
    ini.x += deltaX;
    ini.y += deltaY;
    return ini;
}

Posicao rotacao(Posicao ini, float rot) {
    ini.ori += rot;
    return ini;
}
