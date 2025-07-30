#include <stdio.h>
 
int main() {
    char gender, drive;
    float weight, al_lits, al_percent;
    int n_al, rest;
 
    scanf(" %c %f %c %f %f %d %d", &gender, &weight, &drive, &al_lits, &al_percent, &n_al, &rest);
 
    float drink = ((al_percent / 100.0) * al_lits) * n_al;
    float r = (gender == 'M') ? 0.68 : 0.55;
    float blood = (drink / (weight * r * 10.0)) * 1000.0 - (rest * 15.0);
 
    if (blood <= 50.0 && drive == 'Y') {
        printf("Safe");
    } else {
        printf("Not Safe");
    }
 
    return 0;
}