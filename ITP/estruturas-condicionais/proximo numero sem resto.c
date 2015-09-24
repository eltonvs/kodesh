#include <stdio.h>

int main() {
    int i, j;

    scanf("%i %i", &i, &j);

    printf("%i", i + j - i%j);

    return 0;
}
