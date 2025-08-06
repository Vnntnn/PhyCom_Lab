#include <stdio.h>

int main() {
  double m[3][3], n[3][3];

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == 1) {
        scanf("%lf %lf %lf", &n[j][0], &n[j][1], &n[j][2]);
      } else {
        scanf("%lf %lf %lf", &m[j][0], &m[j][1], &m[j][2]);
      }
    }
  }

  printf("A x B\n");

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      double num = 0.0;
      for (int k = 0; k < 3; k++) {
        num += m[i][k] * n[k][j];
      }
      printf("%.2lf ", num);
      num = 0.0;
    }
    printf("\n");
  }

  return 0;
}
