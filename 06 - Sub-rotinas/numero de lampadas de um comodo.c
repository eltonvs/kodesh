int num_lampadas(int classe, float larg, float prof) {
    int pot, n = 1;
    float i;

    if (classe == 1)
        pot = 15;
    if (classe == 2)
        pot = 18;
    if (classe == 3)
        pot = 20;
    while (i <= pot)
        i = (n * 60) / (larg * prof), n++;

    return n - 1;
}
