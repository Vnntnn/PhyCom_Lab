#include <stdio.h>

double getValue();
double findMin(double arr[], int size);
double findMax(double arr[], int size);
double findAvg(double arr[], int size);
void sort_arr(double arr[], int size);

int main() {
  int n;
  scanf("%d", &n);

  printf("%d Values\n", n);

  double nums[n];

  for (int i = 0; i < n; i++) nums[i] = getValue();

  sort_arr(nums, n);

  printf("Min: %.3lf\n", findMin(nums, n));
  printf("Max: %.3lf\n", findMax(nums, n));
  printf("Avg: %.3lf\n", findAvg(nums, n));

  return 0;
}

double getValue() {
  double value;
  scanf("%lf", &value);
  return value;
}

double findMin(double arr[], int size) {
  return arr[0];
}

double findMax(double arr[], int size) {
  return arr[size - 1];
}

double findAvg(double arr[], int size) {
  double sum;

  for (int i = 0; i < size; i++) { sum += arr[i]; }
  
  return sum / size;
}

void sort_arr(double arr[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (arr[i] < arr[j]) {
        double temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
