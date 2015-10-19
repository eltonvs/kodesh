int poupar(float m, float I, float dep, float *RxD){
    float ac = dep, ac_j, R = 0, D = 0;
    int meses = 0;
    while(ac <= m)
        ac_j = ac * I, ac += ac_j + dep, R += ac_j, meses++;
    ac_j = ac * I, D = dep*(meses + 1), R += ac_j, *RxD = R/D;
    return meses;
}
