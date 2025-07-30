#include "stdio.h"

int main() {
    int status, round, s_car, cnt = 0;
    float distance;

    scanf("%d %f %d %d", &status, &distance, &round, &s_car);

    if (status == 0) {
        ++cnt;
    }

    if (distance >= 1) {
        ++cnt;
    }

    if (round <= 2) {
        ++cnt;
    }

    if (round < s_car + 2) {
        ++cnt;
    }

    if (cnt > 0) {
        printf("DRS not allowed %d", cnt);
    } 
    
    else {
        printf("DRS allowed");
    }

    return 0;
}