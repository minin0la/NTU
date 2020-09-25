#include <stdio.h>

int main(void)
{
    int n, count = 1;
    double sum = 1, term = 1;

    printf("Enter the number of terms to sum: ");
    scanf("%d", &n);

    while (count <= n)
    {
        term = term / count;
        sum = sum + term;
        count++;
    }

    printf("The approximate value of e is %g.\n", sum);

    return 0;
}