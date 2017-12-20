#include <stdio.h>

/*
Write a program that reads input up to # and reports the number of times that the
sequence ei occurs.
*/

int main()
{
    char ch;
    int count = 0;
    char current;
    char last = (char)0;

    while((current = getchar()) != '#')
    {
        if (current == 'i' && last == 'e')
        {
            count++;
            last = (char)0;
        }
        last = current;
    }
    printf("The sequence 'ei' occured %d times.\n", count);
    return 0;
}