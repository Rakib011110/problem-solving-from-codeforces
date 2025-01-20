
#include <stdio.h>
#include <string.h>

int main() {
    char input[101];
    int freq[4] = {0};

    scanf("%s", input);


    for (int i = 0; input[i]; i++) {
        if (input[i] >= '1' && input[i] <= '3') {
            freq[input[i] - '0']++;
        }
    }


    int first = 1;
    for (int i = 1; i <= 3; i++) {
        while (freq[i]--) {
            if (!first) printf("+");
            printf("%d", i);
            first = 0;
        }
    }

    printf("\n");
    return 0;
}
