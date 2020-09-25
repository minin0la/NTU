#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year;

    printf("Enter the year to be tested => ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("The year %d is a \"leap year\"", year);
    }
    else
    {
        printf("The year %d is not  a \"leap year\"", year);
    }

    return 0;
}
