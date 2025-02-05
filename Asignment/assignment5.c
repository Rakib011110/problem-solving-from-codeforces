
#include <stdio.h>

int main() {
    char str1[50], str2[50], result[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++; j++;
    }
    result[i] = '\0';

    printf("The concatenated string is: %s\n", result);

    return 0;
}
