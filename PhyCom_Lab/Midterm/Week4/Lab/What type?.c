#include "stdio.h"
 
int main() {
    char t;
 
    scanf("%c", &t);
 
    int d = t;
 
    if (d >= 48 && d <= 57) {
        printf("number");
    }
 
    else if (d >= 65 && d <= 90) {
        printf("uppercase");
    }
 
    else if (d >= 97 && d <= 122) {
        printf("lowercase");
    }
 
    else {
        printf("error");
    }
 
    return 0;
}