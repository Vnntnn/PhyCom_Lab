#include <stdio.h>
#include <math.h>

double perimeter(double a, double b) { return a + b + pow(pow(a, 2) + pow(b, 2), 0.5); }
double area(double a, double b) { return 0.5 * a * b; }

int main()
{
  double a, b;

  scanf("%lf %lf", &a, &b);

  printf("Perimeter: %.2lf\nArea: %.2lf", perimeter(a, b), area(a, b));

  return 0;
}
