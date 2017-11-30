
#include <stdio.h>

/*
Have a program request the user to enter an uppercase letter. Use nested loops to produce
a pyramid pattern like this:
    A
   ABA
  ABCBA
 ABCDCDA
ABCDEDCBA

The pattern should extend to the character entered. For example, the preceding pattern
would result from an input value of E. Hint: Use an outer loop to handle the rows. Use
three inner loops in a row, one to handle the spaces, one for printing letters in ascending
order, and one for printing letters in descending order. If your system doesn’t use ASCII
or a similar system that represents letters in strict number order, see the suggestion in
programming exercise 3.
*/

int main()
{
    const int ROWS = 5;
    const char FIRST = 'A'; //65
    char ach;
    char dch;
    char input;
    
    printf("Enter a single uppercase letter: \n");
    if(scanf("%c", &input) ==1)
    {
        int diff = input - FIRST;
        int row, sp;
        // outer loop handles rows
        for (row = 0; row < ROWS; row++)
        {
            // inner loop 1 handles spaces
            for(sp = ROWS -1; row < sp; sp--)
                printf(" ");
            // inner loop 2 handles letters (ascending order)    
            for(ach = FIRST; ach <= FIRST + row; ach++)
                printf("%c", ach);
            // inner loop 3 handles letters (descending order)    
            for(dch = ach -1; dch >= FIRST; dch--)
                //if(dch != ach)
                    printf("%c", dch);
            printf("\n");
        }
    }
        
    return 0;
}
