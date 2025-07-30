#include "stdio.h"
#include <stdio.h>

int main() {
    char t;

    scanf("%c", &t);

    if (t == 's' || t == 'S') {
        printf("Soft");
    }

    else if (t == 'm' || t == 'M') {
        printf("Medium");
    }

    else if (t == 'h' || t == 'H') {
        printf("Hard");
    }

    else if (t == 'i' || t == 'I') {
        printf("Intermediate");
    }

    else if (t == 'w' || t == 'W') {
        printf("Wet");
    }

    return 0;
}