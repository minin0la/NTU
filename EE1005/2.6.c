#include <stdio.h>
#include <math.h>
int main(void)
{
    double time = 0.0, max_time = 0.0, interval, acceleration = 9.8, distance;
    double initial;

    printf("Enter the initial velocity: ");
    scanf("%lf", &initial);

    printf("Enter the initial maximum time: ");
    scanf("%lf", &max_time);

    printf("Enter the initial time interval: ");
    scanf("%lf", &interval);

    printf("Time Elapsed Distance Travelled\n");
    printf("--------------------------------\n");

    while (fabs(time <= max_time))
    {
        distance = initial * time + 0.5 * acceleration * time * time;
        printf("%8.2f %8.2f\n", time, distance);
        time = time + interval;
        // printf("%lf %lf", max_time, time);
    }

    return 0;
}