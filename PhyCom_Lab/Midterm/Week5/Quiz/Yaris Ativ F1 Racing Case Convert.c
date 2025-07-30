#include "stdio.h"

int main() {
    char t;

    scanf("%c", &t);

    if (t >= 97 && t <= 122) 
    {
        printf("%c", t - 32);
    } 

    else if (t >= 62 && t <= 90) 
    {
        printf("%c", t + 32);
    } 

    else 
    {
        printf("error");
    }

    return 0;
}