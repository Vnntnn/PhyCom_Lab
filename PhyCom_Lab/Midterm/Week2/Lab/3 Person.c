#include <stdio.h>

int main() {
    char fname1[999], sname1[999], fname2[999], sname2[999], fname3[999], sname3[999];

    scanf("%s %s %s %s %s %s", fname1, sname1, fname2, sname2, fname3, sname3);

    printf("Person 1: %s %s\nPerson 2: %s %s\nPerson 3: %s %s", fname1, sname1, fname2, sname2, fname3, sname3);

    return 0;
}