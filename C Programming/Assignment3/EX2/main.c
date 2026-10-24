#include <stdio.h>

int main(void)
{
    int n;
    float numbers[100];
    float sum = 0.0f;
    float average;

    printf("How many numbers? (1 to 100)\n");
    fflush(stdout);
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    if (n < 1 || n > 100)
    {
        printf("Please choose a count from 1 to 100.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d. Enter number: ", i + 1);
        fflush(stdout);
        if (scanf("%f", &numbers[i]) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            return 1;
        }
        sum = sum + numbers[i];
    }

    average = sum / n;
    printf("Average = %.2f\n", average);
    return 0;
}
