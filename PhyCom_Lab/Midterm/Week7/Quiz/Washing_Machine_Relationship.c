#include <stdio.h>


int main() {
  int round;

  scanf("%d", &round);

  double b_drop = ((double) round / 2) * ((2.0 / 100) * 2800);
  printf("%.2lf\n", b_drop);

  if (b_drop > (2800 * (30.0 / 100))) { printf("Danger"); }
  else { printf("Safe"); }

  return 0;

}
