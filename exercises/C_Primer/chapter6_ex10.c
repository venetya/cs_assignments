#include <stdio.h>

/*
Write a program that reads eight integers into an array and then prints them in reverse
order.
*/

int main()
{
    const int SIZE = 8;
    int input[SIZE];
    printf("Enter 8 integers:\n");
    for( int index = 0; index < SIZE; index++)
    {
        scanf("%d", &input[index]);
    }

    printf("Here's what you entered, in reverse order: \n");
    for(int i = SIZE -1; i >= 0; i--)
    {
        printf("%d ", input[i]);
    }
    printf("\n");

    return 0;
}