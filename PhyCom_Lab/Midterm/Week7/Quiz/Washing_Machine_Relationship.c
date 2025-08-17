#include <stdio.h>

int main() {
  long int games;
  scanf("%ld", &games);

  double blood = 2800.0;
  double total_lost = 0.0;
  double hours = (games * 30.0) / 60.0;

  int full_hours = (int) hours;
  double remain_minutes = (hours - full_hours) * 60.0;

  for (int i = 0; i < full_hours; i++) {
    total_lost += blood * 0.02;
    blood -= blood * 0.02;
  }

  printf("%.2lf\n", total_lost);
  (total_lost > 2800.0 * 0.3) ? printf("Danger") : printf("Safe");

  return 0;
}
