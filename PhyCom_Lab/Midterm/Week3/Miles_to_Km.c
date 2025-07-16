#include <stdio.h>
#define MILE 1.60934
 
int main() {
    float speed;
 
    scanf("%f", &speed);
 
    printf("%.2f", speed * MILE);
 
    return 0;
}
