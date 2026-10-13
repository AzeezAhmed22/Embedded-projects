#include <stdio.h>

/* EX3: Find the largest of three numbers. */
int main(void)
{
    float a, b, c, largest;

    printf("Enter three numbers: ");
    fflush(stdout);
    if (scanf("%f %f %f", &a, &b, &c) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }

    largest = a;
    if (b > largest)
    {
        largest = b;
    }
    if (c > largest)
    {
        largest = c;
    }

    printf("Largest number = %.2f\n", largest);

    return 0;
}
