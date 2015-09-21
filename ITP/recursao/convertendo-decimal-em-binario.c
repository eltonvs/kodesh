void dec2bin(int n) {
    if(n != 0) {
        dec2bin(n/2);
        printf("%i", n%2);
    }
}
