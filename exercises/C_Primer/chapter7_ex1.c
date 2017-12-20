#include <stdio.h>
#define STOP '#'
#define SPACE ' '
#define NEWLINE '\n'

/*
Write a program that reads input until encountering the # character and then reports the
number of spaces read, the number of newline characters read, and the number of all
other characters read.
*/

int main()
{
    int ch;
    int charcount = 0;
    int spcount = 0;
    int linecount = 0;

    while((ch = getchar()) != STOP)
    {
        if(ch == SPACE)
            spcount++;

        else if(ch == NEWLINE)
                linecount++;
        
        else 
            charcount++;
    }

    printf("The input contains %d space(s), %d newline(s) and %d character(s).\n", spcount, linecount, charcount);
    return 0;
}

