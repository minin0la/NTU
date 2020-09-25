#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char ch;

    printf("Enter a letter of the alphabet: ");
    scanf("%c", &ch);

    if (isalpha(ch))
    {
        printf("The character %c is alphabetic. \n", ch);
        if (isupper(ch))
        {
            printf("The character %c is an uppercase letter. \n", ch);
        }
        else
        {
            printf("The character %c is not an uppercase letter. \n", ch);
            printf("The uppercase letter is %c \n", toupper(ch));
        }
    }
    else
    {
        if (isdigit(ch))
        {
            printf("The character %c is a digit. \n", ch);
        }
        else
        {
            printf("The character %c is not a digit. \n", ch);
        }
    }
    return 0;
}