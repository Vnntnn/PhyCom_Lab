#include "stdio.h"

int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	int res = a == b ? printf("%d + %d = %d", a, b, a + b) : printf("%d - %d = %d", a, b, a - b);	

	return 0;
}
