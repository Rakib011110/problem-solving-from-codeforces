
#include <stdio.h>
#include <string.h>

int main() {
    char n[20];
    scanf("%s", n);

    int luckyCount = 0;


    for (int i = 0; n[i] != '\0'; i++) {
        if (n[i] == '4' || n[i] == '7') {
            luckyCount++;
        }
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
