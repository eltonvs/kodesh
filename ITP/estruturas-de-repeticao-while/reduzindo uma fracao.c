#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, a, b;

	scanf("%d", &a);
	scanf("%d", &b);
	
	for (i = b; i >=1; i--)
		if(a%i == 0 && b%i == 0)
			a /= i, b /= i;
	
	printf("%d %d", a, b);

	return 0;
}
