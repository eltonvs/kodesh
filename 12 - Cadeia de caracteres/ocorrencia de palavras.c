#include <stdio.h>

int main() {
    int tf, ts, i, j, st, cont = 0;
    char frase[100], sub[100];
    
    gets(frase);
    gets(sub);
    
    for (tf = 0; frase[tf] != '\0'; tf++);
    for (ts = 0; sub[ts] != '\0'; ts++);

    for (i = 0; i <= tf - ts; i++) {
        for (j = 0, st = 1; j < ts; j++)
            if(sub[j] != frase[i+j]) st = 0;
        if (st) cont++;
    }

    printf("%i", cont);
    
    return 0;
}
