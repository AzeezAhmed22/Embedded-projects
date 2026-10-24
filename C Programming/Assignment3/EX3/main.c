#include <stdio.h>

int main(void)
{
    int rows;
    int cols;
    float a[10][10];
    float transposed[10][10];

    printf("Enter rows and columns (1 to 10):\n");
    fflush(stdout);
    if (scanf("%d %d", &rows, &cols) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Rows and columns must be from 1 to 10.\n");
        return 1;
    }

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            printf("Enter a%d%d: ", row + 1, col + 1);
            fflush(stdout);
            if (scanf("%f", &a[row][col]) != 1)
            {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    printf("Entered matrix:\n");
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            printf("%.2f ", a[row][col]);
        }
        printf("\n");
    }

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            transposed[col][row] = a[row][col];
        }
    }

    printf("Transposed matrix:\n");
    for (int row = 0; row < cols; row++)
    {
        for (int col = 0; col < rows; col++)
        {
            printf("%.2f ", transposed[row][col]);
        }
        printf("\n");
    }

    return 0;
}
