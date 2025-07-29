#include <stdio.h>

int main() {
    float road;

    scanf("%f", &road);

    if (road > 58.855 || road < 0) {
        printf("InValid");
        return 0;
    }

    if (road >= 0 && road <= 5.032) {
        printf("Bangkok");
    } else if (road > 5.032 && road <= 35.477) {
        printf("Samut Prakarn");
    } else if (road > 35.477 && road <= 52.900) {
        printf("Chachoengsao");
    } else {
        printf("Chon Buri");
    }

    return 0;
}

