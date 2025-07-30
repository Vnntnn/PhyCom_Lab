#include <stdio.h>
 
void decrease(int* n, int* m) {
    int i = *m;
    while (i >= *n) {
        printf("%d ", i);
        i--;
    }
}
 
void increase(int* n, int* m) {
    int i = *m;
    while (i <= *n) {
        printf("%d ", i);
        i++;
    }
}
 
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
 
    if (m > n) {
        decrease(&n, &m);
    }
    else if (m < n) {
        increase(&n, &m);
    }
    else {
        printf("%d", m);
    }
     
    return 0;
} 