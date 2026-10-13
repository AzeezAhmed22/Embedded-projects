#include <stdio.h>

int main(void)
{
    float a, b;

    printf("Enter value of a:\n");
    fflush(stdout);
    scanf("%f", &a);

    printf("Enter value of b:\n");
    fflush(stdout);
    scanf("%f", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping, value of a = %g\n", a);
    printf("After swapping, value of b = %g\n", b);

    return 0;
}
