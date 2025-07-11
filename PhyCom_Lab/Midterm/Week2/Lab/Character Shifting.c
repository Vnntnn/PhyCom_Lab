#include <stdio.h>

int main() {
    char t1, t2, t3, t4, t5;

    scanf("%c %c %c %c %c", &t1, &t2, &t3, &t4, &t5);

    printf("%c\n%c\n%c\n%c\n%c", ++t1, t2, ++t3, t4, ++t5);

    return 0;
}