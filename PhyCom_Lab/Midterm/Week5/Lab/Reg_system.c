#include <stdio.h>

int main() {
  int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
  int age, height, weight;
  int sum_age = 0;
  float sum_height = 0, sum_weight = 0;

  for (int i = 0; i < 50; i++) {
    scanf("%d %d %d", &age, &height, &weight);

    sum_age += age;
    sum_height += height;
    sum_weight += weight;

    if (age >= 20 && height >= 160) {
      c1++;
    }
    if (age < 20 && (height <= 180 || weight >= 60)) {
      c2++;
    }
    if (age >= 30 && (weight >= 40 && weight <= 80)) {
      c3++;
    }
    if (age < 40 && (weight < 85 || (height <= 200))) {
      c4++;
    }
  }

  printf("Age >= 20 and Height >= 160: %d\n", c1);
  printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", c2);
  printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", c3);
  printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", c4);
  printf("Average Age: %.0f\n", sum_age / 50.0);
  printf("Average Height: %.2f\n", sum_height / 50.0);
  printf("Average Weight: %.2f\n", sum_weight / 50.0);

  return 0;
}