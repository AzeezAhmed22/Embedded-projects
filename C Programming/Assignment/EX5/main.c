#include <stdio.h>

int main(void)
{
    char letter;

    printf("Enter a character:\n");
    fflush(stdout);
    scanf(" %c", &letter);

    printf("ASCII value of %c = %d\n", letter, letter);

    return 0;
}
