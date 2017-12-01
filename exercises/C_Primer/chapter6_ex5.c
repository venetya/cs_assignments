#include <stdio.h>

/*
 Write a program that prints a table with each line giving an integer, its square, and its
cube. Ask the user to input the lower and upper limits for the table. Use a for loop
*/

int main()
{
    int lower;
    int upper;
    int num;

    printf("Enter lower limits: \n");
    scanf("%d", &lower);
    printf("Enter upper limits: \n");
    scanf("%d", &upper);
    
    for(num = lower; num <= upper; num++)
    {
        printf("%d\t%d\t%d\n", num, num * num, num * num * num);
    }

    return 0;
}