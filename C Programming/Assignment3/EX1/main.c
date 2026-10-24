#include <stdio.h>

int main(void)
{
    float a[2][2];
    float b[2][2];
    float result[2][2];

    printf("Enter the elements of 1st matrix\n");
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("Enter a%d%d: ", row + 1, col + 1);
            fflush(stdout);
            if (scanf("%f", &a[row][col]) != 1)
            {
                printf("Invalid input. Please enter a number.\n");
                return 1;
            }
        }
    }

    printf("Enter the elements of 2nd matrix\n");
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("Enter b%d%d: ", row + 1, col + 1);
            fflush(stdout);
            if (scanf("%f", &b[row][col]) != 1)
            {
                printf("Invalid input. Please enter a number.\n");
                return 1;
            }
        }
    }

    printf("\nSum Of Matrix:\n");
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            result[row][col] = a[row][col] + b[row][col];
            printf("%.1f\t", result[row][col]);
        }
        printf("\n");
    }

    return 0;
}
