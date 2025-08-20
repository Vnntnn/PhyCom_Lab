#include <stdio.h>

int main() {
    int human;
    double w;
    scanf("%d %lf", &human, &w);

    int ages[human];
    double total_w = 0;
    for (int i = 0; i < human; i++) {
        double hw;
        scanf("%d %lf", &ages[i], &hw);
        total_w += hw;
    }

    int k = 0, ad = 0;
    for (int i = 0; i < human; i++) (ages[i] < 12) ? k++ : ad++;

    ((k > 0 && ad == 0) || total_w > w) ? printf("Not Safe") : printf("Safe");

    return 0;
}