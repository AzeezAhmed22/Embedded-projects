#include <stdio.h>

int main(void)
{
    int numbers[100];
    int n;
    int target;
    int foundIndex = -1;

    printf("How many numbers? (1 to 100)\n");
    fflush(stdout);
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (n < 1 || n > 100)
    {
        printf("Please choose a count from 1 to 100.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter numbers[%d]:\n", i);
        fflush(stdout);
        if (scanf("%d", &numbers[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter the number to search for:\n");
    fflush(stdout);
    if (scanf("%d", &target) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == target)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1)
    {
        printf("Number not found.\n");
    }
    else
    {
        printf("Number found at the location = %d\n", foundIndex + 1);
    }
    return 0;
}
