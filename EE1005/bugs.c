/* Calculate and display the difference of two input values */
#include <stdio.h>
int main(void)
{
    int X, x, sum;

    printf("What is the first number?: ");
    scanf("%d", & X);
    printf("What is the second number?: ");
    scanf("%d", & x);

    sum = X+x;

    printf("The sum of %d and %d is %d\n", X, x, sum);
    return 0;
}