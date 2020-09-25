#include <stdio.h>
#include <math.h>
int main(void)
{
    float I, V, R1, R2, R3, sum;

    if (R1 != 0, R2 !=0 , R3 != 0){
    printf("What is the voltage value?: ");
    scanf("%2f", &V);
    printf("What is the R1 Value?: ");
    scanf("%2f", &R1);
    printf("What is the R2 Value?: ");
    scanf("%2f", &R2);
    printf("What is the R3 Value?: ");
    scanf("%2f", &R3);

    sum = V/(R1 + R2 + R3);
    printf("The current is %g A\n", sum);
    }
}

