/* Solution of a*x*x + b*x + c = 0 */
#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(void)
{
    char do_again = 'Y';
    double a, b, c, d, root1, root2;
    // while (do_again == 'Y')
    for ( ; do_again=='Y'; )
    {

        printf("Input the coefficient a => ");
        scanf("%lf", &a);
        printf("Input the coefficient b => ");
        scanf("%lf", &b);
        printf("Input the coefficient c => ");
        scanf("%lf", &c);

        d = b * b - 4 * a * c;

        if (d < 0)
        { //complex roots
            printf("First root = %.2lf + i%.2lf\n", -b / (double)(2 * a), sqrt(-d) / (2 * a));
            printf("Second root = %.2lf - i%.2lf\n", -b / (double)(2 * a), sqrt(-d) / (2 * a));
        }
        else
        {
            /* Compute the roots. */
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);
            printf("First root is %8.3f\n", root1);
            printf("Second root is %8.3f\n", root2);
        }
        do
        {
            printf("\nSolve another problem (y/n)? ");
            scanf("%c", &do_again);
            fflush(stdin);
            do_again = toupper(getchar());
            if (do_again != 'Y' && do_again != 'N')
            {
                printf("Invalid response. Please try again. \n");
            }
        } while (do_again != 'Y' && do_again != 'N');
    }
    return 0;
}
