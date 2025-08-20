#include <stdio.h>

int main() {
    int n;
    double hit;
    scanf("%d %lf", &n, &hit);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        double sanarm;
        scanf("%lf", &sanarm);

        if (hit > sanarm) cnt++;
    }

    printf("%d", cnt);

    return 0;
}