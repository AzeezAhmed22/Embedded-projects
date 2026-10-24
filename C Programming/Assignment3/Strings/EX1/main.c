#include <stdio.h>

int main(void)
{
    char text[1000];
    char character;
    int length = 0;
    int count = 0;

    printf("Enter a string: ");
    fflush(stdout);
    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Exclude the Enter key's newline from the string.
    while (text[length] != '\0' && text[length] != '\n')
    {
        length++;
    }
    if (length == 999)
    {
        printf("Please enter at most 998 characters.\n");
        return 1;
    }
    text[length] = '\0';

    printf("Enter a character to find frequency: ");
    fflush(stdout);
    if (scanf("%c", &character) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == character)
        {
            count++;
        }
    }

    printf("Frequency of %c = %d\n", character, count);
    return 0;
}
