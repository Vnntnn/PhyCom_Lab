#include <stdio.h>
 
int main() {
    int f, l, sum = 0;
    scanf("%d %d", &f, &l);
 
    printf("pass : ");
     
    if (f > l) {
        for (int i = f; i >= l; i--) {
            if (i % 2 == 0) {
                sum += i;
                printf("%d ", i);
            }
        }
    }
    else {
        for (int i = f; i < l + 1; i++) {
            if (i % 2 == 0) {
                sum += i;
                printf("%d ", i);
            }
        }
    }
 
    printf("\nSum : %d", sum);
    return 0;
}
