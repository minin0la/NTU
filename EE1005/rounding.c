#include <stdio.h>
#include <math.h>

int main(void)
{
    double num;

    printf("Enter a positive real number: ");
    scanf("%lf", &num);

    printf("The nearest integer is %g.\n", floor(num + 0.5));

    return 0;
}
