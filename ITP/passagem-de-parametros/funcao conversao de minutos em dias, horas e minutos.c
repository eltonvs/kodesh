void converte(int *min, int *ho, int *di) {
    *ho += *min/60, *min = *min%60, *di = *ho/24, *ho = *ho%24;
}
