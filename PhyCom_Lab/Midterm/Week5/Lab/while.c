#include <stdio.h>
 
int main() {
    int i, cnt = 1;
 
    scanf("%d", &i);
 
    while (cnt <= i) {
        printf("%d ", cnt);
        cnt++;
    }
 
    return 0;
}