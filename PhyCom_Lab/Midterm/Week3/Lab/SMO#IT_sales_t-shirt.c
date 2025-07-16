#include <stdio.h>
 
int main() {
    float p, dc, n;
 
    scanf("%f %f %f", &p, &dc, &n);
 
    printf("%.2f", (p - (p * (dc / 100))) * n);
 
    return 0;
}
