#include <stdio.h>

int main() {
    char c, *pc = &c;
    int i, *pi = &i;
    float f, *pf = &f;
    double d, *pd = &d;

    scanf("%i", pi);
    
    printf("%lu %lu %lu %lu", *pi * sizeof(*pc), *pi * sizeof(*pi), *pi * sizeof(*pf), *pi * sizeof(*pd));

    return 0;
}
