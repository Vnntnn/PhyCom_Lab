#include <stdio.h>

int len_str(char* t) {
    int n = 0;
    while (t[n] != '\0') n++;
    return n;
}

int main() {
    char txt[101];
    scanf("%s", txt);

    int len = len_str(txt);

    for (int i = 0; i < len / 2; i++) {
        if (txt[i] != txt[len - 1 - i]) {
            printf("It is not Palindrome.");
            return 0;
        }
    }

    printf("It is Palindrome.");
    return 0;
}