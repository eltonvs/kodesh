#include <stdio.h>
#include <math.h>

int main() {
    int i, n, soma = 0, s[100];
    
    scanf("%i", &n);
    
    for (i = 0; i < n; i++)
        if (i == 0)
            s[i] = 1;
        else if (i % 2 == 0)
            s[i] = s[i - 2] + 1;
        else
            s[i] = pow(s[i - 1], 2);
    
    for (i = 0; i < n; i++)
        soma += s[i];
    
    printf("%i", soma);

    return 0;
}
