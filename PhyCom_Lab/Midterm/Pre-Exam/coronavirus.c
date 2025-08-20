#include <stdio.h>
#include <string.h>

int main() {
    char b[21];
    scanf("%s", b);

    char coro_bass[] = "attaaaggtttataccttcccaggtaacaaaccaaccaactttcgatctcttgtagatctgttctctaaacgaactttaaaatctgtgtggctgtcactcggctgcatgcttagtgcactcacgcagtataattaataactaattactgtcgttgacaggacacgagtaactcgtctatcttctgcaggctgcttacggtttcgtccgtgttgcagccgatcatcagcacatctaggtttcgtccgggtgtgaccgaaaggtaagatggagagccttgtccctggtttcaacgagaaaacacacgtccaactcagtttgcctgttttacaggttcgcgacgtgctcgtacgtggctttggagactccgtggaggaggtcttatcagaggcacgtcaacatcttaaagatggcacttgtggcttagtagaagttgaaaaaggcgttttgcctcaacttgaacagccctatgtgttcatcaa";
    
    int n = strlen(b), m = strlen(coro_bass), found = 0, pos = -1;
    for (int i = 0; i <= m - n; i++) {
        int match = 1;
        for (int j = 0; j < n; j++) {
            if (b[j] != coro_bass[i + j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            found = 1;
            pos = i;
            break;
        }
    }
    (found) ? printf("Exist [%d]\n", pos) : printf("Not Exist\n");

    return 0;
}