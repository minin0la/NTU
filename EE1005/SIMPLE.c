#include <stdio.h>
int main(void) /* line 1 */
{
int number1, number2, smaller; /* line 2 */
printf("Enter the first integer: "); /* line 3 */
scanf("%d", &number1); /* line 4 */
printf("Enter the second integer: "); /* line 5 */
scanf("%d", &number2); /* line 6 */
if (number1 > number2) /* line 7 */
smaller = number2; /* line 8 */
else /* line 9 */
smaller = number1; /* line 10 */
printf("%d is the smaller integer.", smaller);/* line 11 */
return 0;
}