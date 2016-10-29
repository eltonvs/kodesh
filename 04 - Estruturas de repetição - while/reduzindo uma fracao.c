#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, a, b;

    scanf("%d %d", &a, &b);

    for (i = b; i >=1; i--)
        if(!a%i && !b%i)
            a /= i, b /= i;

    printf("%d %d", a, b);

    return 0;
}
