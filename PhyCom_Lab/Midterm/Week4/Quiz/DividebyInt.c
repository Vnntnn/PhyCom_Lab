#include "stdio.h"

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%.2f", a * 1.00 / b);

    return 0;
}