#include <stdio.h>

int main(void)
{
    int numbers[100];
    int n;
    int newValue;
    int position;
    int insertIndex;

    printf("How many numbers? (1 to 99)\n");
    fflush(stdout);
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (n < 1 || n > 99)
    {
        printf("Please choose a count from 1 to 99.\n");
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

    printf("Enter the element to be inserted:\n");
    fflush(stdout);
    if (scanf("%d", &newValue) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the position (1 to %d):\n", n + 1);
    fflush(stdout);
    if (scanf("%d", &position) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (position < 1 || position > n + 1)
    {
        printf("Invalid position.\n");
        return 1;
    }

    insertIndex = position - 1;
    // Move from the end so existing values are not overwritten.
    for (int i = n; i > insertIndex; i--)
    {
        numbers[i] = numbers[i - 1];
    }
    numbers[insertIndex] = newValue;
    n = n + 1;

    printf("After insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
