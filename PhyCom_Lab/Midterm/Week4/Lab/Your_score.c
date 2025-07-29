#include "stdio.h"

int main() {
	double s;

	scanf("%lf", &s);

	if (s >= 80 && s <= 100) {
		printf("A");
	}

	if (s >= 70 && s < 80) {
		printf("B");
	}
	
	if (s >= 60 && s < 70) {
		printf("C");
	}

	if (s >= 50 && s < 60) {
		printf("D");
	}

	if (s >= 0 && s < 50) {
		printf("F");
	}

	if (s < 0 || s > 100) {
		printf("Out of Range");
	}

	return 0;
}
