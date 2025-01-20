
#include <stdio.h>

int main() {
    int k;
    long long n;
    scanf("%lld %d", &n, &k);

    while (k--) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n -= 1;
        }
    }

    printf("%lld\n", n);
    return 0;
}

