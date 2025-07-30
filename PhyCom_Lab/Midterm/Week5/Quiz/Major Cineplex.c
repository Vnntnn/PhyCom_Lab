#include "stdio.h"

int main() {
    int age, day, t_price = 0;

    scanf("%d %d", &age, &day);

    if (day == 4) {
        printf("Ticket price: %d Baht", t_price + 100);
        return 0;
    }

    if (day == 1 || day == 7) {
        t_price += 20;
    }

    if (age < 13) {
        t_price += 120;
    }

    else if (age >= 13 && age < 60) {
        t_price += 220;
    }

    else {
        t_price += 140;
    }

    printf("Ticket price: %d Baht", t_price);
    
    return 0;
}