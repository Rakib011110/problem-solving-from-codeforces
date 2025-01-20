#include <stdio.h>

int main() {
    int n, X = 0;
    char statement[4];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", statement);
        if (statement[1] == '+') {
            X++;
        } else {
            X--;
        }
    }
    printf("%d\n", X);

    return 0;
}
