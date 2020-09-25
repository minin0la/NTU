#include <stdio.h>
#include <math.h>

int main(void)
{
    double num;

    printf("Enter a real number: ");
    scanf("%lf", &num);

    printf("fabs(%g) = %g\n", num, fabs(num));
    printf("log(%g) = %g\n", num, log(num));
    return 0;
}
