#include <stdio.h>

/*
Redo exercise 3 using a switch.
*/

int main()
{
    int ch;
    int even = 0;
    int evsum = 0;
    int odd = 0;
    int odsum;

    while((ch = getchar()) != '0')
    {
        switch(ch % 2)
        {
            case 0  : 
                evsum += ch;
                even++;   
                break;

            default :
                odsum += ch;
                odd++;
        }
    }

    printf("Total even characters: %d, average: %d\n", even, evsum/even);
    printf("Total odd characters: %d, average: %d\n", odd, odsum/odd);

    return 0;
}