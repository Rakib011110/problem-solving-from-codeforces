#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int current_passengers = 0, max_capacity = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        current_passengers -= a;
        current_passengers += b;

        if (current_passengers > max_capacity) {
            max_capacity = current_passengers;
        }
    }

    printf("%d\n", max_capacity);
    return 0;
}
