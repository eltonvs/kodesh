#include <stdio.h>

int main() {
    int n, i, p;
    
    scanf("%i", &n);
    
    for (i = 1; i < n/2; i++)
        if (i * (i + 1) * (i + 2) == n) {
            p = 1;
            break;
        }
    
    if (p == 1)
        printf("S");
    else
        printf("N");
    
    return 0;
}
