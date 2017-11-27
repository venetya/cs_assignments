
#include <stdio.h>

/*
Use nested loops to produce the following pattern:
$
$$
$$$
$$$$
$$$$$
*/

int main()
{
    const int ROWS = 5;
    const int CHARS = 5;

    int row;
    char ch;
    char dollars[5];

    for(row = 0; row < ROWS;row ++)
    {
        dollars[row] = '$';
        for(int i = 0; i < CHARS; i++)
        {
            printf("%c", dollars[i]);
        }
        printf("\n");
    }

    return 0;
}