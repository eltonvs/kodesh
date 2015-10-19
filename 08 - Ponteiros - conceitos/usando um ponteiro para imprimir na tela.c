#include <stdio.h>

int main() {
    int n, *p = &n;
    
    scanf("%i", p);
    
    printf("%i", *p * 2);
    
    return 0;
}
