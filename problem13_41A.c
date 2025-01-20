#include <stdio.h>
#include <string.h>

int main() {
    char s[101], t[101];
    scanf("%s %s", s, t);
    int len_s = strlen(s);
    int len_t = strlen(t);

    if (len_s != len_t) {
        printf("NO\n");
        return 0;
    }
    for (int i = 0; i < len_s; i++) {
        if (s[i] != t[len_s - i - 1]) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
