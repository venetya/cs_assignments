#include <stdio.h>
#define STOP '#'

/*
Write a program that reads input until encountering #. Have the program print each
input character and its ASCII decimal code. Print eight character-code pairs per line.
Suggestion: Use a character count and the modulus operator (%) to print a newline character
for every eight cycles of the loop.
*/

int main()
{
    int ch;
    int charcount = 0;

    while((ch = getchar()) != STOP)
    {
        charcount ++;
        if(charcount % 9 != 0)
            printf("%c %d ", ch, ch);
        else
            printf("\n");
    }
    printf("\n");
    
    return 0;
}