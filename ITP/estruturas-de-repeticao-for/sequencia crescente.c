#include <stdio.h>

int main() {
    int n, i, numeros[100], seq;
    
    scanf("%i", &n);
    
    for (i = 0; i < n; i++)
        scanf("%i", &numeros[i]);
    
    for (i = 1; i < n; i++)
        seq = (numeros[i] > numeros [i - 1]) ? 1 : 0;
    
    printf("%i", seq);
    
    return 0;
}
