#include <stdio.h>

int main() {
    unsigned n, c = 0;

    scanf("%i", &n);

    while (c < n) {
        printf("%u ", 1<<c);
        c++;
    }

    return 0;
}
