#include <stdio.h>

int main(void)
{
    char text[1000];
    int length = 0;

    printf("Enter a string: ");
    fflush(stdout);
    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Count manually; the newline is not part of the entered text.
    while (text[length] != '\0' && text[length] != '\n')
    {
        length++;
    }
    if (length == 999)
    {
        printf("Please enter at most 998 characters.\n");
        return 1;
    }

    printf("Length of string: %d\n", length);
    return 0;
}
