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

    word[index] = '\0';

    // char word [h|e|l|l|o|_|_|_|_|_] => [h|e|l|l|o|\0|_|_|_|_]
    //            0 1 2 3 4 5 6 7
    
    size = strlen(word);

    for(int i = size; i >= 0; i--)
        printf("%c", word[i]);
    printf("\n");

    return 0;
}