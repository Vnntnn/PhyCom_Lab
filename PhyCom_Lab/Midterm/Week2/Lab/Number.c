#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int f = n / 1000;
    int l = n % 1000;
    
    printf("%d%d\n", l, f);

    return 0;
}
