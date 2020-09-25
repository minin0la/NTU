#include <stdio.h>
int main(void)
{
    float celsius, fahrenheit;
    printf("What is the value of C: ");
    scanf("%f", &celsius);
    fahrenheit = ((9.0 / 5.0) * celsius) + 32.0;
    printf("The tempreture of C is %8.2f", fahrenheit);
    return 0;
}
