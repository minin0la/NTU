#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    char ch;

    printf("Enter a letter of the alphabet: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The letter is a lowercase. \n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("The letter is an uppercase. \n");
    }
    else
    {
        printf("Please write characters! \n");
    }

    return 0;
}
