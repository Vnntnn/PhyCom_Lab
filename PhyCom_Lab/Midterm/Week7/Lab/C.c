#include <stdio.h>
#include <math.h>

int main() {
  long long int a, b;

  scanf(" %lld %lld", &a, &b);

  printf("sqrt(%lld^2+%lld^2)=%.2f", a, b, sqrt((a * a) + (b * b)));

  return 0;
}
