#include "stdio.h"
 
int main() {
    char t;
 
    scanf("%c", &t);
 
    int d = t;
 
    if (d >= 65 && d <= 90) {
        printf("%c", d + 32);
    }
 
    else if (d >= 97 && d <= 122) {
        printf("%c", d - 32);
    }
 
    else {
        printf("error");
    }
 
    return 0;
}