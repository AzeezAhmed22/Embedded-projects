#include <stdio.h>

int main(void)
{
    float a, b, temp;

    printf("Enter value of a:\n");
    fflush(stdout);
    scanf("%f", &a);

    printf("Enter value of b:\n");
    fflush(stdout);
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping, value of a = %g\n", a);
    printf("After swapping, value of b = %g\n", b);

    return 0;
}
