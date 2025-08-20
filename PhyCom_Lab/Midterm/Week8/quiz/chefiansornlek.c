#include <stdio.h>
#include <math.h>

int main(void) {
    int m, k, n;
    double m_value, k_value, r;
    scanf("%d %lf\n%d %lf\n%d", &m, &m_value, &k, &k_value, &n);

    r = pow( k_value/m_value , 1.0/(k - m));
    double a1 = m_value / pow(r, m-1.00);
    double an = a1 * pow(r, n - 1.00);

    printf("%.4lf\n%.4lf", (a1*(1-pow(r, n*1.00))) / (1.00-r), an);
    return 0;
}