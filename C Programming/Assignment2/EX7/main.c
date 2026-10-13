#include <stdio.h>

/* EX7: Calculate a factorial using a loop. */
int main(void)
{
    int number, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    fflush(stdout);
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (number < 0)
    {
        printf("Error!!! Factorial of negative number doesn't exist.\n");
        return 0;
    }

    if (number > 20)
    {
        /* Larger factorials do not fit in a 64-bit integer. */
        printf("Please enter a number from 0 to 20.\n");
        return 0;
    }

    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial = %llu\n", factorial);

    return 0;
}
