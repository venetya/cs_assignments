#include <stdio.h>
/*
Write a program that creates an array with 26 elements and stores the 26 lowercase letters
in it. Also have it show the array contents.
*/

int main(){
    char alpha[26];
    
    for (int i = 0; i < 26;i++)
    {
        alpha[i] = 'a' + i;
        printf("%c\n", alpha[i]);
    }

    return 0;
}