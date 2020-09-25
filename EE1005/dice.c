#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int counter = 1;

    srand((unsigned)time(NULL));

    printf("This program simulates the rolling of a six_sided\n");
    printf("dice for 10 times.\n");

    while (counter <= 10)
    {
        printf("Rolling dice %d time(s): %d\n", counter, rand() % 6 + 1);
        counter++;
    }

    return 0;
}