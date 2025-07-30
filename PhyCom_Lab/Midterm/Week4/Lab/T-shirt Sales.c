#include <stdio.h>

int main() {
  double price;
  int p, n;

  scanf("%lf %d %d", &price, &p, &n);

  double p1 = (n * price) * (100 - p) / 100;
  double p2 = ((n / 3) * price * 2) + n % 3 * price;

  (p1 <= p2) ? printf("Discount %d%%\n%.2lf", p, p1)
             : printf("Buy 2 Get 1\n%.2lf", p2);

  return 0;
}