#include <stdio.h>

/* EX1: Check whether an integer is even or odd. */
int main(void)
{
    int number;

    printf("Enter an integer you want to check: ");
    fflush(stdout);
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (number % 2 == 0)
    {
        printf("%d is even.\n", number);
    }
    else
    {
        printf("%d is odd.\n", number);
    }

    return 0;
}
