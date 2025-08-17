#include <stdio.h>

int main() {
    int route[4], cnt_exp = 0, cnt_rom = 0;
    double eff[4], fuel_price, liters, cost, sum_exp = 0, sum_rom = 0;

    scanf("%lf", &fuel_price);
    for (int i = 0; i < 4; i++) {
        scanf("%d", &route[i]);
    }
    for (int i = 0; i < 4; i++) {
        scanf("%lf", &eff[i]);
    }

    for (int i = 0; i < 4; i++) {
        liters = (route[i] == 1 ? 29.0 : 25.0) / eff[i];
        cost = liters * fuel_price + (route[i] == 1 ? 60.0 : 0.0);
        (route[i] == 1 ? (sum_exp += cost, cnt_exp++) : (sum_rom += cost, cnt_rom++));
        printf("Day %d: fuel %.2lf L, cost %.2lf Baht\n", i + 1, liters, cost);
    }

    printf("Expressway: %.2lf Baht\n", cnt_exp ? sum_exp / cnt_exp : 0.00);
    printf("Romklao: %.2lf Baht\n", cnt_rom ? sum_rom / cnt_rom : 0.00);

    return 0;
}