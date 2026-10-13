#include <stdio.h>

/* EX4: Check whether a number is positive, negative, or zero. */
int main(void)
{
    float number;

    printf("Enter a number: ");
    fflush(stdout);
    if (scanf("%f", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (number > 0)
    {
        printf("%.2f is positive.\n", number);
    }
    else if (number < 0)
    {
        printf("%.2f is negative.\n", number);
    }
    else
    {
        printf("You entered zero.\n");
    }

    return 0;
}
