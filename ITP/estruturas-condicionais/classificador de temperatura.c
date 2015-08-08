#include <stdio.h>

int main() {
    int temperatura;

    scanf("%i", &temperatura);

    if (temperatura >= 30)
        printf("%i", 1);
    else
        printf("%i", 0);

    return 0;
}
