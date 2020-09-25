#include <stdio.h>

int main(void)
{
    char ch = '#';
    int n = 5, i = 1;

    //printf from i = 1 to 5
    //i.e. print from 0 till 4 leading spaces
    while (i <= n)
    {
        printf("%*c\n", i++, ch);
    }
    while (i >= 1)
    {
        printf("%*c\n", i--, ch);
    }

    return 0;
}