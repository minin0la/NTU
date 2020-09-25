#include <stdio.h>

int main(void)
{
    int hrs, mins;
    char spacing;

    printf("This program first prints the time in the 24-hour format in the 12-hour format and then rounds the time to the nearest hour.\n");
    printf("Enter the time in the 24-hour format, i.e. HH:MM => ");
    scanf("%d%c%d", &hrs, &spacing, &mins);
    if (mins < 10)
    {
        if (hrs <= 12)
        {
            if (hrs == 0)
            {
                printf("The time in the 12-hour format is 12:0%d AM", mins);
            }
            else
            {
                printf("The time in the 12-hour format is %d:0%d AM", hrs, mins);
            }
        }
        else
        {
            hrs -= 12;
            printf("The time in the 12-hour format is %d:0%d PM", hrs, mins);
        }
    }
    else
    {
        if (hrs <= 12)
        {
            if (hrs == 0)
            {
                printf("The time in the 12-hour format is 12:0%d AM", mins);
            }
            else
            {
                printf("The time in the 12-hour format is %d:%d AM", hrs, mins);
            }
        }
        else
        {
            hrs -= 12;
            printf("The time in the 12-hour format is %d:%d PM", hrs, mins);
        }
    }
    return 0;
}