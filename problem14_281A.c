#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int upper_count = 0, lower_count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            upper_count++;
        } else {
            lower_count++;
        }
    }
//
    if (upper_count > lower_count) {
        for (int i = 0; s[i] != '\0'; i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; s[i] != '\0'; i++) {
            s[i] = tolower(s[i]);
        }
    }

    printf("%s\n", s);
    return 0;
}
