#include <stdio.h>

/*
Write a program that asks for an integer and then prints all the integers from (and
including) that value up to (and including) a value larger by 10. (That is, if the input
is 5, the output runs from 5 to 15.) Be sure to separate each output value by a space or
tab or newline.
*/
int main() {
    int input = 0;
    printf("Enter any integer ('q' to quit): \n");

    while(scanf("%d", &input) ==1) {
        for (int i = input; i < input + 11; i++){
            printf("%d \t", i);
        }
    printf("\n");
    }
    return 0;
}



