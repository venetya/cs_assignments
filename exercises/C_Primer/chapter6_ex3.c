
#include <stdio.h>

/*
Use nested loops to produce the following pattern:
F
FE
FED
FEDC
FEDCB
FEDCBA
*/

int main()
{
    const int ROWS = 6;
    const int CHARS = 6;

    int row;
    char ch;

    for (row = ROWS; row >= 0; row--)
    {
        for(ch = ('A' + CHARS -1); ch >= ('A' + row); ch--)
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}