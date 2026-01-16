#include <stdio.h>
#include <string.h>

int main()
{
    char space[50];
    int i, count = 0;

    fgets(space, 50, stdin);

    // If input is empty or only newline
    if (space[0] == '\n')
    {
        printf("0");
        return 0;
    }

    count = 1;  // At least one word

    for (i = 0; space[i] != '\0'; i++)
    {
        if (space[i] == ' ' && space[i + 1] != ' ' && space[i + 1] != '\n')
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}