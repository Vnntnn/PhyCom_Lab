#include <stdio.h>

int main() {
    int total_seconds;

    scanf("%d", &total_seconds);

    int days = total_seconds / 86400;
    int remaining_seconds = total_seconds % 86400;

    int hours = remaining_seconds / 3600;
    remaining_seconds %= 3600;

    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;

    printf("%d s = %d d %d h %d m %d s\n", total_seconds, days, hours, minutes, seconds);

    return 0;
}
