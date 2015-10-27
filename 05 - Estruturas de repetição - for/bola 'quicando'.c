#include <stdio.h>

int main() {
    int i, n = 0, h, hfinal, ulth, m, cm, mm;

    scanf("%i", &h);

    h *= 1000, ulth = h, hfinal = 2 * h;
    for (i = h; ulth >= 1; i--)
        ulth /= 2, hfinal += ulth * 2, n++;

    m = hfinal/1000, cm = hfinal%1000/10, mm = (hfinal%1000)%10;

    printf("%i\n%im %icm %imm", n, m, cm, mm);

    return 0;
}
