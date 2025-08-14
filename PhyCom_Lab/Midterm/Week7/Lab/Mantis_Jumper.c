#include <stdio.h>

long long recurr_ways(int n, long long memo[]) {
    if (n == 0) return 1;
    if (n < 0) return 0;

    if (memo[n] != -1) return memo[n];

    memo[n] = recurr_ways(n - 1, memo) + recurr_ways(n - 2, memo);
    return memo[n];
}

long long recurr(int n) {
    if (n < 0) return 0;

    long long memo[n + 1];
    for (int i = 0; i <= n; i++) memo[i] = -1;

    return recurr_ways(n, memo);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("method = %lld", recurr(n));
    return 0;
}
