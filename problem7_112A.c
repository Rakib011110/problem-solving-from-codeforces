#include <stdio.h>

int main() {
    char s1[101], s2[101];
    scanf("%s %s", s1, s2);

    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        char c1 = s1[i];
        char c2 = s2[i];

       
        if (c1 >= 'A' && c1 <= 'Z') {
            c1 = c1 + 32;
        }
        if (c2 >= 'A' && c2 <= 'Z') {
            c2 = c2 + 32;
        }

      
        if (c1 < c2) {
            printf("-1\n");
            return 0;
        } else if (c1 > c2) {
            printf("1\n");
            return 0;
        }
    }

   
    printf("0\n");
    return 0;
}
