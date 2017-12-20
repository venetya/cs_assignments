#include <stdio.h>
#define PERIOD '.'
#define EXCLAMATION '!'

/*
Using if else statements, write a program that reads input up to #, replaces each
period with an exclamation mark, replaces each exclamation mark initially present with
two exclamation marks, and reports at the end the number of substitutions it has made.
*/

int main()
{
    char input;
    int subst = 0;

    while((input = getchar()) != '#')
    {
        if (input == PERIOD)
        {
            printf("%c", EXCLAMATION);
            subst++;
        }
        else if (input == EXCLAMATION)
            {
                printf("%c%c", EXCLAMATION, EXCLAMATION);
                subst++;
            }
            else
                printf("%c", input);
    }
    printf("There were a total of %d substitutions made.\n", subst);
    return 0;
}