#include <stdio.h>

int cnt_t(char* txt) {
    int n = 0;
    while (txt[n] != '\0') {
        n++;
    }
    return n;
}

int main() {
    char txt[100];

    scanf("%[^\n]", txt);

    int len_str = cnt_t(txt);

    for (int i = len_str - 1; i >= 0; i--) {
        printf("%c", txt[i]);
    }

    return 0;
}
