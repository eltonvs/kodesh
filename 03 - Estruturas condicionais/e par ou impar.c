#include <stdio.h>

int main() {
    int a;

    scanf("%i", &a);

    printf("%i", a%2 ? 1 : 0);

    return 0;
}
