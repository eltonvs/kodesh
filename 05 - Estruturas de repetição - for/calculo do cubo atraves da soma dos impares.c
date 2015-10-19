#include <stdio.h>

int main() {
  int m, n, i, inicio = 1;

  scanf("%d", &m);

  for (n = 1; n <= m; n++) {
    printf("%d*%d*%d = %d", n, n, n, inicio);
    for (i = 1; i < n; i++)
      printf(" + %d", inicio + 2 * i);
    inicio += 2 * n;
    printf("\n");
  }

  return 0;
}
