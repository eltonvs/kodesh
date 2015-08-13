#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 0, inv = 0, d, digit = 0;

    scanf("%i", &n);
    
    d = n;

    while (d != 0)
        d = d /10, digit++;

    d = n;

    for (i = digit - 1; i >= 0; i--)
        inv += (d%10) * pow(10, i), d = d /10;
    
    if (n == inv)
        printf("S");
    else
        printf("N");

    return 0;
}
