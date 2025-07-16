#include <stdio.h>
#include <math.h>
 
int main() {
    double p, r, h;
 
    scanf("%lf %lf %lf", &p, &r, &h);
 
    double v = h * M_PI * pow((r / 2), 2); 
 
    printf("Volume : %.2lfml\nBaht/ml : %.4lf", v, p / v);
 
    return 0;
}
