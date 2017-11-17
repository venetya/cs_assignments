#include <stdio.h>

int main(){
/*
Write a program that sounds an alert and then prints the following text:
Startled by the sudden sound, Sally shouted, "By the Great Pumpkin,
what was that!"
*/

    char beep = '\007';
    printf("%c",beep);
    printf("\a");
    printf("Startled by the sudden sound, Sally shouted,\"By the Great Pumpkin, what was that!\"\n");

    return 0;
}