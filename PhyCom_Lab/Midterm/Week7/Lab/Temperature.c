#include <stdio.h>

double celToFaren(double c);
double farenToCel(double f);
void printCel(double c);
void printFaren(double f);


int main() {
  double decimal;
  char unit;

  scanf("%lf %c", &decimal, &unit);

  if (unit == 'f' || unit == 'F') printCel(farenToCel(decimal));
  if (unit == 'c' || unit == 'C') printFaren(celToFaren(decimal));

  return 0;

}

double celToFaren(double c) { return 32 + ( c * (180.0/100.0) ); }

double farenToCel(double f) { return (f - 32) / (180.0 / 100.0); }

void printCel(double c) { printf("%.2lf c", c); }

void printFaren(double f) { printf("%.2lf f", f); }

