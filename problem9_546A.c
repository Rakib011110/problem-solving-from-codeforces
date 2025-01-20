#include <stdio.h>

int main() {
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int totalCost = k * w * (w + 1) / 2;
    int borrow = totalCost - n;
    if (borrow > 0) {
        printf("%d\n", borrow);
    } else {
        printf("0\n");
    }

    return 0;
}
