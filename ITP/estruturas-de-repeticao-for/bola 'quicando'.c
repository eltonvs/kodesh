#include <stdio.h>

int main() {
    int i, n = 0, h, hfinal = 0, ulth, m, cm, mm;

    scanf("%i", &h);

    h *= 1000, ulth = h, hfinal = 2 * h;
    for (i = h; ulth >= 1; i--)
        ulth = ulth / 2, hfinal += ulth * 2, n++;

    h = hfinal, m = h/1000, cm = h%1000/10, mm = (h%1000)%10;

    printf("%i\n%im %icm %imm", n, m, cm, mm);

    return 0;
}
