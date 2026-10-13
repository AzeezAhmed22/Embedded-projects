#include <stdio.h>

/* EX8: A simple calculator using switch and case. */
int main(void)
{
    char operator;
    float a, b;

    printf("Enter operator either + or - or * or divide: ");
    fflush(stdout);
    if (scanf(" %c", &operator) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter two operands: ");
    fflush(stdout);
    if (scanf("%f %f", &a, &b) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    switch (operator)
    {
        case '+':
            printf("%.1f + %.1f = %.1f\n", a, b, a + b);
            break;
        case '-':
            printf("%.1f - %.1f = %.1f\n", a, b, a - b);
            break;
        case '*':
            printf("%.1f * %.1f = %.1f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0)
            {
                printf("Error! Division by zero.\n");
            }
            else
            {
                printf("%.1f / %.1f = %.1f\n", a, b, a / b);
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
