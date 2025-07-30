#include "stdio.h"

int main() {
    int d_type;

    scanf("%d", &d_type);

    if (d_type == 0) {
        printf("Duck Type: Silent Duck");
    }

    else if (d_type > 0 && d_type < 11) {
        printf("Duck Type: Chill Duck");
    }

    else if (d_type >= 11 && d_type <= 50) {
        printf("Duck Type: Happy Duck");
    }
    
    else if (d_type > 50) {
        printf("Duck Type: Talkative Duck");
    }

    else {
        printf("Error");
    }

    return 0;
}