#include <stdio.h>

int main() {
    int sbp, dbp;
    scanf("%d %d", &sbp, &dbp);

    (sbp > 140 || dbp > 90) ? printf("Hypertension") : printf("Normal");

    return 0;
}