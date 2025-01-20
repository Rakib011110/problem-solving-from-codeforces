#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int luckyCount = 0;


    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            luckyCount++;
        }
        n /= 10;
    }


    if (luckyCount == 0) {
        printf("NO\n");
        return 0;
    }

    while (luckyCount > 0) {
        int digit = luckyCount % 10;
        if (digit != 4 && digit != 7) {
            printf("NO\n");
            return 0;
        }
        luckyCount /= 10;
    }

    printf("YES\n");
    return 0;
}
