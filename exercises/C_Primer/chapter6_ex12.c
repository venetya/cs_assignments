#include <stdio.h>
#include <math.h>

/*
Write a program that creates an eight-element array of ints and sets the elements to the
first eight powers of 2 and then prints the values. Use a for loop to set the values, and,
for variety, use a do while loop to display the values.
*/

int main()
{
    int arr[8];
    const int SIZE = 8;
    for(int i = 0; i < 8;i++)
        arr[i] = pow(2,i);

    int count = 0;
    do {
        printf("%d\n", arr[count]);
        count++;
        } while (count < 8);

    return 0;
}