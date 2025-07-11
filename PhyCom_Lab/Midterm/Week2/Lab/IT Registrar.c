#include <stdio.h>

int main() {
    char f_name[31], l_name[31];
    int std_id, day, month, year;
    float gpa;

    scanf("%s %s %d %d/%d/%d %f", f_name, l_name, &std_id, &day, &month, &year, &gpa);

    printf("Fullname: %s %s\nID: %d\nDOB: %02d-%02d-%04d\nGPA: %.2f", f_name, l_name, std_id, day, month, year, gpa);

    return 0;
}
