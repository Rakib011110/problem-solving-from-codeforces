
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n); // Number of words

    for (int i = 0; i < n; i++) {
        char word[101];
        scanf("%s", word); // Read the word
        int len = strlen(word);

        if (len > 10) {
            // Print the compressed form
            printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
        } else {
            // Print the word as it is
            printf("%s\n", word);
        }
    }

    return 0;
}
