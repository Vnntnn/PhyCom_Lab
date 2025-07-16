#include <stdio.h>
#include <math.h>

int main() {
	float h, w;

	scanf("%f %f", &h, &w);

	float divi = (h / 100);

	printf("%f", w / (divi * divi));

	return 0;
}
