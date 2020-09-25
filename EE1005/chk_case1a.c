#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Enter a letter of the alphabet: ");
    scanf("%c", &ch);
    if (isalpha(ch))
        if (islower(ch))
            printf("%c is a lowercase letter.\n", ch);
        else
            printf("%c is an uppercase letter.\n", ch);
    else
        printf("Not character you idiot!\n");

    return 0;
}