#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char word[101];
    scanf("%s", word);

    int upper_count = 0, lower_count = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        if (isupper(word[i])) {
            upper_count++;
        } else {
            lower_count++;
        }
    }

    for (int i = 0; word[i] != '\0'; i++) {
        if (upper_count >= lower_count) {
            word[i] = toupper(word[i]);
        } else {
            word[i] = tolower(word[i]);
        }
    }

    printf("%s\n", word);
    return 0;
}

