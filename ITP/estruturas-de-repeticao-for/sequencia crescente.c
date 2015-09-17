#include <stdio.h>

int main() {
    int n, n1, n2, i, seq;
    
    scanf("%i", &n);
    scanf("%i", &n1);
    
    for (i = 0; i < n-1; i++) {
        scanf("%i", &n2);
        seq = (n2 > n1) ? 1 : 0, n1 = n2;
    }

    printf("%i", seq);

    return 0;
}
