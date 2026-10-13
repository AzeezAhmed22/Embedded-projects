#include <stdio.h>

int main(void)
{
    float a, b, product;

    printf("Enter two numbers:\n");
    fflush(stdout);
    scanf("%f %f", &a, &b);

    product = a * b;
    printf("Product: %f\n", product);

    return 0;
}
