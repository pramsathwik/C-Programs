#include <stdio.h>

int main() {
    char str1[50], str2[50];
    int i = 0;

    printf("Enter a string: ");
    fgets(str1, 50, stdin);

    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("Copied string: %s", str2);
    return 0;
}
