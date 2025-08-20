#include <stdio.h>

int main() {
    int mat[3][3];
    for(int i = 0; i < 3; i++) scanf("%d %d %d", &mat[i][0], &mat[i][1], &mat[i][2]);

    while (1) {
        char cmd;
        int c;
        scanf(" %c", &cmd);

        if (cmd == 'E') break;

        if (cmd == 'L') {
            c = 0;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (j > 0 && mat[i][j - 1] == 0) {
                        mat[i][j - 1] = mat[i][j];
                        mat[i][j] = 0;
                        c = 1;
                        break;
                    }
                }
                if (c == 1) break;
            }
            if (c == 0) break;
        }

        if (cmd == 'R') {
            c = 0;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (j < 3 && mat[i][j + 1] == 0) {
                        mat[i][j + 1] = mat[i][j];
                        mat[i][j] = 0;
                        c = 1;
                        break;
                    }
                }
                if (c == 1) break;
            }
            if (c == 0) break;
        }

        if (cmd == 'U') {
            c = 0;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (i > 0 && mat[i - 1][j] == 0) {
                        mat[i - 1][j] = mat[i][j];
                        mat[i][j] = 0;
                        c = 1;
                        break;
                    }
                }
                if (c == 1) break;
            }
            if (c == 0) break;
        }

        if (cmd == 'D') {
            c = 0;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (i < 3 && mat[i + 1][j] == 0) {
                        mat[i + 1][j] = mat[i][j];
                        mat[i][j] = 0;
                        c = 1;
                        break;
                    }
                }
                if (c == 1) break;
            }
            if (c == 0) break;
        }
    }

    for (int i = 0; i < 3; i++) printf("%d %d %d\n", mat[i][0], mat[i][1], mat[i][2]);

    return 0;
}