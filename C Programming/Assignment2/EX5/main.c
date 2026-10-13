#include <stdio.h>

/* EX5: Check whether a character is an English alphabet letter. */
int main(void)
{
    char character;

    printf("Enter a character: ");
    fflush(stdout);
    if (scanf(" %c", &character) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if ((character >= 'a' && character <= 'z') ||
        (character >= 'A' && character <= 'Z'))
    {
        printf("%c is an alphabet.\n", character);
    }
    else
    {
        printf("%c is not an alphabet.\n", character);
    }

    return 0;
}
