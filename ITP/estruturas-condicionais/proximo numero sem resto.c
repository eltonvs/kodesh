#include <stdio.h>

int main() {
    int a;

    scanf("%i", &a);

    if (a%2 == 0) {
        printf("%i", 0);
    } else {
        printf("%i", 1);
    }
    
    return 0;
}
