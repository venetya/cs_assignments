#include <stdio.h>
#include <stdbool.h>

/*
Write a program that accepts an integer as input and then displays all the prime numbers
smaller than or equal to that number.
*/

int main()
{
    int N, i, j, isPrime, n;

    printf("Enter the value of N\n");
    printf("To print all prime numbers between 1 and N\n");
    scanf("%d", &N);

    printf("Here are the prime numbers between %d and %d:\n", 1, N);

    for(i = 2; i<=N; i++)
    {
        isPrime = false;
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0) 
            {
                isPrime = true;
                break;
            }
        }
        if(!isPrime && N != 1)
            printf("%d ", i);
    }
    return 0;
}