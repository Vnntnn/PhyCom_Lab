#include "stdio.h"

int main() {
    float bank = 0.0, cash = 0.0, state_cash;
    char cmd;
    int err_cnt = 0;

    scanf("%f %f", &bank, &cash);

    while(1) {

        scanf("%c %f", &cmd, &state_cash);

        if (cmd == 'E' || err_cnt == 3) {
            break;
        }

        switch (cmd) {
            case 'D':
                if (cash < state_cash) {
                    ++err_cnt;
                    continue;
                }

                bank += state_cash;
                cash -= state_cash;
                break;

            case 'W':
                if (bank < state_cash) {
                    ++err_cnt;
                    continue;
                }

                bank -= state_cash;
                cash += state_cash;
                break;
        }

        err_cnt = 0;
    }

    printf("%.2f\n%.2f", bank, cash);

    return 0;
}