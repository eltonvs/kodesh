#include <stdio.h>
 
unsigned long cripto(unsigned long n, unsigned long s) {
    return (n * s) ^ 1<<15;
}
 
unsigned long decripto(unsigned long c, unsigned long s) {
    return (c ^ 1<<15) / s;
}
 
int main() {
    unsigned long n, s;
 
    scanf("%lu %lu", &n, &s);
 
    printf("cripto: %lu -> %lu\n", n, cripto(n, s));
    printf("decripto: %lu -> %lu", cripto(n, s), decripto(cripto(n, s), s));
 
    return 0;
}
