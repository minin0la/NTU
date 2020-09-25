#include <stdio.h>
#include <math.h>

int main(void)
{
    double num1, num2;
    char op;

    printf("Enter two numbers and an operator in the form\n");
    printf("number 1 operator number2 (e.g. 4.5 - 2.9): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        printf("%g %c %g = %g\n", num1, op, num2, num1 + num2);
        break;
    case '-':
        printf("%g %c %g = %g\n", num1, op, num2, num1 - num2);
        break;
    case '*':
        printf("%g %c %g = %g\n", num1, op, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("%g %c %g = %g\n", num1, op, num2, num1 / num2);
        }
        else
        {
            printf("Sorry, the donominator cannot be zero. \n");
        }
        break;
    default:
        printf("Invalid operator!\n");
        break;
    }

    return 0;
}
