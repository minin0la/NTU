#include <stdio.h>

int main(void)
{
    int height, width, row_count, col_count;

    printf("Enter two intergers for height and width: ");
    scanf("%d %d", &height, &width);

    for (row_count = 1; row_count <= height; row_count++)
    {
        if (row_count == 1 || row_count == height)
        {
            for (col_count = 1; col_count <= width; col_count++)
            {
                printf("=");
            }
        }
        else
        {
            for (col_count = 1; col_count <= width; col_count++)
                if (col_count == 1 || col_count == width)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
        }
        printf("\n");
    }
}