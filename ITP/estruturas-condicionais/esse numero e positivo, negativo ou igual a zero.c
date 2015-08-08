#include <stdio.h>

int main() {
    int a;

    scanf("%i", &a);

    if (a < 0)
        printf("%i", -1);
    else if (a == 0)
        printf("%i", 0);
    else
        printf("%i", 1);
    
    return 0;
}
