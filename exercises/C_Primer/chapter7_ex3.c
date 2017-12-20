#include <stdio.h>

/*
Write a program that reads integers until 0 is entered. After input terminates, the program
should report the total number of even integers (excluding the 0) entered, the
average value of the even integers, the total number of odd integers entered, and the
average value of the odd integers.
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
        if(ch % 2 == 0)
        {
            evsum += ch;
            even++;
        }   
        else
        {
            odsum += ch;
            odd++;
        } 
    }

    printf("Total even characters: %d, average: %d\n", even, evsum/even);
    printf("Total odd characters: %d, average: %d\n", odd, odsum/odd);

    return 0;
}