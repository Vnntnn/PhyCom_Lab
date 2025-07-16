#include <stdio.h>
 
int main() {
    double nums[4];
 
    for (int i = 0; i < 4; i++) {
        scanf("%lf", &nums[i]);
    }
 
    printf("Summation is %.2lf\nAverage is %.3lf", nums[0] + nums[1] + nums[2] + nums[3], (nums[0] + nums[1] + nums[2] + nums[3]) / 4);
 
    return 0;
}
