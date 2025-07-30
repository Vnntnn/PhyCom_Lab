#include "stdio.h"
#include <stdio.h>

int main() {
    int n, sum = 0;

    do {
        scanf("%d", &n);
        if (n != -9) {
            sum += n;
        }
    }
    while (n != -9);

    printf("%d", sum);

    return 0;
}