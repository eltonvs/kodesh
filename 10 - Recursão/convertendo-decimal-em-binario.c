void dec2bin(int n) {
    if(n) {
        dec2bin(n/2);
        printf("%i", n%2);
    }
}
