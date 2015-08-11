#include <stdio.h>

int main () {
    int n, cont = 0, media, maiormedia = 0, menormedia;

    scanf("%i", &n);

    while (cont < n) {
        scanf("%i", &media);
        if (media > maiormedia)
            maiormedia = media;
        if (media < menormedia)
            menormedia = media;
        cont++;
    }

    printf("%i %i", maiormedia, menormedia);

    return 0;
}
