#include <stdio.h>

int main() {
    int x, y, m, n, e, m_e = 0, m_x, m_y;

    scanf("%i %i", &m, &n);

    for (x = 1; x <= m; x++)
        for (y = 1; y <= n; y++) {
            e = x*y-x*x+y;
            if (e > m_e)
                m_e = e, m_x = x, m_y = y;
        }

    printf("%i x=%i y=%i", m_e, m_x, m_y);

    return 0;
}
