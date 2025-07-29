#include "stdio.h"

int main() {
	float nums[3];

	scanf("%f %f %f", &nums[0], &nums[1], &nums[2]);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (nums[i] > nums[j]) {
				float temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}

	printf("%.2f", nums[1]);

	return 0;
}
