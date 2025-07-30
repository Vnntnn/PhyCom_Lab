#include "stdio.h"

int main() {
    char name[40];
    int grade[6];
    double sum;

    scanf("%[^\n]", name);

    for (int i = 0; i < 6; i++) {
        scanf("%d", &grade[i]);
        grade[i] *= 3;
        sum += grade[i];
    }

    printf("Grade announcement 1/2568: %s\n\
GPS/GPA: %.2lf", name, sum / 18);

    return 0;
}