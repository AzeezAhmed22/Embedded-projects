#include <stdio.h>

/* EX6: Add the natural numbers from 1 to n. */
int main(void)
{
    int n;
    long long i, sum = 0;

    printf("Enter an integer: ");
    fflush(stdout);
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum = %lld\n", sum);

    return 0;
}
