void transmite(unsigned char *origem, unsigned char *destino, int n) {
    for (int k = 0; k < n; k++)
        *(destino++) = *(origem++);
}
