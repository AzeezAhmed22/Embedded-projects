#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[1000];
    char temp;
    int length;
    int left = 0;
    int right;

    printf("Enter the string: ");
    fflush(stdout);
    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Invalid input.\n");
        return 1;
    }

    length = (int)strlen(text);
    if (length > 0 && text[length - 1] == '\n')
    {
        length--;
        text[length] = '\0';
    }
    if (length == 999)
    {
        printf("Please enter at most 998 characters.\n");
        return 1;
    }

    right = length - 1;
    while (left < right)
    {
        temp = text[left];
        text[left] = text[right];
        text[right] = temp;
        left++;
        right--;
    }

    printf("Reverse string is: %s\n", text);
    return 0;
}
