#include <stdio.h>
int const SIZE = 255; 
char ch[SIZE];

/*
Write a program that reads in a line of input and then prints the line in reverse order.
You can store the input in an array of char; assume that the line is no longer than 255
characters. Recall that you can use scanf() with the %c specifier to read a character at a
time from input and that the newline character (\n) is generated when you press the
Enter key
*/

int main()
{
    int index = 0;
    int count;
    char input;
    printf("Enter a series of characters: ");
    while(scanf("%c", &input) ==1 && input != '\n')
    {
        ch[index] = input;
        index++;
    }

    count = index;
    while(count >= 0)
        {
            printf("%c", ch[count]);
            count--;
        }
    printf("\n");

    return 0;
}