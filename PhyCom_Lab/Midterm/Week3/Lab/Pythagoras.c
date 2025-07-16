#include "stdio.h"
#include <math.h>
 
int main() {
    double n, m;
 
    scanf("%lf %lf", &n, &m);
 
    printf("%.2lf", sqrt(pow(n, 2) + pow(m, 2)));
 
    return 0;
}
