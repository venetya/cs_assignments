#include <stdio.h>
#include <string.h>

/*
Write a program that reads a single word into a character array and then prints the word
backward. Hint: Use strlen() (Chapter 4) to compute the index of the last character in
the array.
*/

int main()
{
    int index = 0;
    int size;
    char word[20];
    char ch;
    printf("Enter a single word: \n");

    while(scanf("%c", &ch) ==1 && ch != '\n')
    {
        word[index] = ch;
        index++;
    }
    
    size = strlen(word);

    for(int i = size; i >= 0; i--)
        printf("%c", word[i]);
    printf("\n");

    return 0;
}