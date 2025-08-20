#include <stdio.h>
#include <math.h>

int main() {
    int n;
    char name[7];

    scanf("%d %s", &n, name);

    double lits[n], total = 0.0;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &lits[i]);
        total += lits[i];
    }

    double cap;
    if (name[0] == 'N') cap = 6.6;
    if (name[0] == 'M') cap = 5.5;
    if (name[0] == 'C') cap = 4.4;

    printf("%s: %.0lf refills.", name, ceil(total / cap));

    return 0;
}