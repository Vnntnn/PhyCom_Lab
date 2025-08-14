#include <stdio.h>
#include <math.h>
#define P 3.141592653589793


double find_h(double de, double u);
double de_to_rad(double de);

int main() {
  double de, u;
  
  scanf("%lf %lf", &de, &u);

  printf("theta (degree) : %.0lf\nu (m/s) : %.0lf\nh (m) : %.4lf", de, u, find_h(de, u));

  return 0;
}

double de_to_rad(double de) { return (de * P) / 180; }

double find_h(double de, double u) { return ((u * u) * ((sin(de_to_rad(de))) * sin(de_to_rad(de)))) / (2 * 9.81); }
