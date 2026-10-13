#include <stdio.h>

int main(void)
{
    int a, b, sum;

    printf("Enter two integers:\n");
    fflush(stdout);
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum: %d\n", sum);

    return 0;
}
